package com.wipro.beans;

import java.math.BigInteger;
import java.util.Date;

public class FundBean {

   public int fundCusip;
   public String fundId;
   public String fundName;
   public String fundManager;
   public BigInteger fundNav;
   public BigInteger fundStart;
   public Date fundNavDate;
   
	   
	
	public int getFundCusip() {
		return fundCusip;
	}
	public void setFundCusip(int fundCusip) {
		this.fundCusip = fundCusip;
	}
	public String getFundId() {
		return fundId;
	}
	public void setFundId(String fundId) {
		this.fundId = fundId;
	}
	public String getFundName() {
		return fundName;
	}
	public void setFundName(String fundName) {
		this.fundName = fundName;
	}
	public String getFundManager() {
		return fundManager;
	}
	public void setFundManager(String fundManager) {
		this.fundManager = fundManager;
	}
	public BigInteger getFundNav() {
		return fundNav;
	}
	public void setFundNav(BigInteger fundNav) {
		this.fundNav = fundNav;
	}
	public BigInteger getFundStart() {
		return fundStart;
	}
	public void setFundStart(BigInteger fundStart) {
		this.fundStart = fundStart;
	}
	public Date getFundNavDate() {
		return fundNavDate;
	}
	public void setFundNavDate(Date fundNavDate) {
		this.fundNavDate = fundNavDate;
	}

	@Override
	public String toString() {
		return "FundBean [fundCusip=" + fundCusip + 
				       ", fundId=" + fundId + 
				       ", fundName=" + fundName + 
				       ", fundManager=" + fundManager + 
				       ", fundNav=" + fundNav + 
				       ", fundStart=" + fundStart + 
				       ", fundNavDate=" + fundNavDate
				       + "]";
	}

}
