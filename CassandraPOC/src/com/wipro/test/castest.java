package com.wipro.test;

import com.wipro.beans.FundBean;
import com.wipro.dao.FundDAO;
import com.wipro.persistence.*;

import com.datastax.driver.core.ResultSet;
import com.datastax.driver.core.Row;

public class castest {

/**
 * Main function for demonstrating connecting to Cassandra with host and port.
 *
 * @param args Command-line arguments; first argument, if provided, is the
 *    host and second argument, if provided, is the port.
 */

public static void main(final String[] args)
{
   CassandraConnector client = new CassandraConnector();
   client.connect();

   ResultSet results = client.getSession().execute("SELECT * FROM esp_keyspace.fund");
   System.out.println(String.format("%-30s\t%-20s\t%-20s\n%s", "fund_id", "fund_manager", "fund_name",
           "-------------------------------+-----------------------+--------------------"));
   for (Row row : results) {
       System.out.println(String.format("%-30s\t%-20s\t%-20s", row.getString("fund_id"),
       row.getString("fund_manager"),  row.getString("fund_name")));
   }
   System.out.println();

   
   
    client.close();
   
    FundDAO funddao= null;
    FundBean fundbean = null;
    try{
    	funddao = new FundDAO("esp_keyspace", "fund");
	    if(funddao.tableExists()){
	    	fundbean = funddao.read(616961405);
	    }else{
	    	System.out.println("Table NOT available");
	    }
	    	
    }catch (Exception e){
    	System.out.println(e);
    }finally{
    	System.out.println(fundbean.toString());
     }
    
    try{
    
	    fundbean.setFundCusip(fundbean.getFundCusip()+1);
	    fundbean.setFundName("Global Variable Great Opportunities Fund");
	    System.out.println("Inserting " +fundbean.toString() );
	
	    funddao.create(fundbean);
	    
    }catch (Exception e){
    	System.out.println(e);
    }finally{
    	System.out.println(fundbean.toString());
  }

  System.out.println("Last line");

}

}