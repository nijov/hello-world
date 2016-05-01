package com.wipro.persistence;

import com.datastax.driver.core.Cluster;
import com.datastax.driver.core.Host;
import com.datastax.driver.core.Metadata;
import com.datastax.driver.core.Session;
import static java.lang.System.out;
/**
 * Class used for connecting to Cassandra database.
 */
public class CassandraConnector
{
	public String node; 			// Node IP address
	public int port;				// Node port 
	private Cluster cluster;		// Cassandra Cluster.
	private Session session;		// Cassandra Session.
    private Metadata metadata;		// Metadata 

	
	public CassandraConnector(){

		//This is the IP of the Machine where cassandra is running
		//this.node  = "192.168.1.172"; 
		//this.node  = "172.20.10.5"; 
		this.node  = "52.39.47.25";
		this.port =  9042;
		System.out.println("Connecting to IP Address " + this.node + ":" + this.port + "...");

		this.cluster = Cluster.builder().addContactPoint(node).withPort(port).build();
		this.metadata = cluster.getMetadata();
	}

   /**
    * Connect to Cassandra Cluster specified by provided node IP
    * address and port number.
    *
    * @param node Cluster node IP address.
    * @param port Port of cluster host.
    */
   public void connect()
   {
      out.printf("Connected to cluster: %s\n", metadata.getClusterName());
      for (final Host host : metadata.getAllHosts())
      {
         out.printf("Datacenter: %s; Host: %s; Rack: %s\n",
            host.getDatacenter(), host.getAddress(), host.getRack());
      }
      session = cluster.connect();
   }
   
   
   /**
    * Provide nodes IP address.
    *
    * @return ipAddress.
    */
   public String getIpAddress()
   {
      return this.node;
   }
   
   /**
    * Provide nodes IP address.
    *
    * @return ipAddress.
    */
   public int getPort()
   {
      return this.port;
   }
   
   /**
    * Provide my Session.
    *
    * @return My session.
    */
   public Session getSession()
   {
      return this.session;
   }
  
   
   public Cluster getCluster(){
	   return this.cluster;
   }
   /** Close cluster. */
   public void close()
   {
      cluster.close();
   }
}
