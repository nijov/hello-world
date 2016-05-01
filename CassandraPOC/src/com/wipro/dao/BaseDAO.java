package com.wipro.dao;

import java.util.ArrayList; 
import java.util.List; 

import com.wipro.persistence.*;
import com.datastax.driver.core.TableMetadata;
import com.wipro.exception.*;

public abstract class BaseDAO {
	private CassandraConnector connecterClient;
	private String keySpace;
	private String tableName;
	
	private List<CassandraConnector> connectionPool = new ArrayList<CassandraConnector>();

	public BaseDAO(String keySpace, String tableName){
		this.keySpace = keySpace;
		this.tableName = tableName;
	}
	
   /**
    * Check if the table exist in the key space
    *
    * @return tableExistsTrueorFalse
    */

	public boolean tableExists() throws MyDAOException{
		String dbTableName = "";
		CassandraConnector connecterClient = new CassandraConnector();
		connecterClient.connect();
		
		try{
			TableMetadata table = connecterClient.getCluster().getMetadata().getKeyspace(this.keySpace).getTable(this.tableName);
			dbTableName=table.getName();
		}catch (Exception e){
			System.out.println(e);
		}finally{
			connecterClient.close();
		}
		return !dbTableName.isEmpty();
	}
	
	protected abstract void createTable() throws MyDAOException;
}

