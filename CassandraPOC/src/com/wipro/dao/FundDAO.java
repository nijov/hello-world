package com.wipro.dao;

import java.util.Date;
import java.util.HashSet;
import java.util.Set;
import java.util.UUID;

import com.datastax.driver.core.BoundStatement;
import com.datastax.driver.core.DataType;
import com.datastax.driver.core.PreparedStatement;
import com.datastax.driver.core.ProtocolVersion;
import com.datastax.driver.core.ResultSet;
import com.datastax.driver.core.Row;
import com.wipro.beans.FundBean;
import com.wipro.exception.MyDAOException;
import com.wipro.persistence.CassandraConnector;

public class FundDAO extends BaseDAO{
	
	private final ProtocolVersion protocolVersion;
	
	public FundDAO(String keySpace, String tableName){
		super(keySpace,tableName);
		this.protocolVersion = ProtocolVersion.NEWEST_SUPPORTED;
	}
	public FundBean read(int fundCusip) throws MyDAOException {
		
		CassandraConnector client = new CassandraConnector();
		client.connect();
		ResultSet results = client.getSession().execute("SELECT * FROM esp_keyspace.fund where fund_cusip=" + fundCusip);

		FundBean fund = new FundBean();

		for (Row row : results) {
			fund.fundCusip = row.getInt("fund_cusip");
			fund.fundId = row.getString("fund_id");
			fund.fundManager = row.getString("fund_manager");
			fund.fundName = row.getString("fund_name");
			fund.fundNav = row.getVarint("fund_nav");
			fund.fundStart = row.getVarint("fund_start");
			fund.fundNavDate = row.getTimestamp("fund_navdate");
		}
		
		client.close();
		
		return fund;
		
	}
	public synchronized void create(FundBean fund) throws MyDAOException {

		CassandraConnector client = new CassandraConnector();
		client.connect();
		
		PreparedStatement preparedStatement = client.getSession().prepare(
				"insert into esp_keyspace.fund"
				+ "(fund_cusip,fund_id,fund_name,fund_manager, fund_nav,fund_start,fund_navdate)"
				+ "VALUES (?, ?, ?, ?, ?, ?, ?);");
		
		
		Date timestamp = new Date();
		fund.fundNavDate = 	timestamp;
		
		BoundStatement boundStatement = new BoundStatement(preparedStatement);

		boundStatement.setInt("fund_cusip", fund.fundCusip);
		boundStatement.setString("fund_id", fund.fundId);
		boundStatement.setString("fund_name", fund.fundName);
		boundStatement.setString("fund_manager", fund.fundManager);
		boundStatement.setVarint("fund_nav", fund.fundNav);
		boundStatement.setVarint("fund_start", fund.fundStart);
		boundStatement.setTimestamp("fund_navdate", fund.fundNavDate);
		
		
		/*
		for ( int i = 0; i < 7; i++ ) {
			DataType dataType = preparedStatement.getVariables().getType( i );
			boundStatement.setBytesUnsafe( i, dataType.serialize( columnValues[i], protocolVersion ) );
		}
		 */
		
		
		client.getSession().execute(boundStatement);
		
	
	}
	public FundBean lookup(String fundId) throws MyDAOException {
		CassandraConnector client = new CassandraConnector();
		client.connect();
		ResultSet results = client.getSession().execute("SELECT * FROM esp_keyspace.fund where fund_id=" + fundId);

		FundBean fund = new FundBean();

		for (Row row : results) {
			fund.fundCusip = row.getInt("fund_cusip");
			fund.fundId = row.getString("fund_id");
			fund.fundManager = row.getString("fund_manager");
			fund.fundName = row.getString("fund_name");
			fund.fundNav = row.getVarint("fund_nav");
			fund.fundStart = row.getVarint("fund_start");
			fund.fundNavDate = row.getTimestamp("fund_navdate");
		}
		
		client.close();
		
		return fund;
			
	}
	public void createTable() throws MyDAOException {
		
	}
}
