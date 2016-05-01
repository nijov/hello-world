<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<!-- NewPage -->
<html lang="en">
<head>
<!-- Generated by javadoc (1.8.0_66) on Thu Jan 28 16:09:48 CET 2016 -->
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>FunctionExecutionException (DataStax Java Driver for Apache Cassandra - Binary distribution 3.0.0 API)</title>
<meta name="date" content="2016-01-28">
<link rel="stylesheet" type="text/css" href="../../../../../stylesheet.css" title="Style">
<script type="text/javascript" src="../../../../../script.js"></script>
</head>
<body>
<script type="text/javascript"><!--
    try {
        if (location.href.indexOf('is-external=true') == -1) {
            parent.document.title="FunctionExecutionException (DataStax Java Driver for Apache Cassandra - Binary distribution 3.0.0 API)";
        }
    }
    catch(err) {
    }
//-->
var methods = {"i0":10,"i1":10,"i2":10};
var tabs = {65535:["t0","All Methods"],2:["t2","Instance Methods"],8:["t4","Concrete Methods"]};
var altColor = "altColor";
var rowColor = "rowColor";
var tableTab = "tableTab";
var activeTableTab = "activeTableTab";
</script>
<noscript>
<div>JavaScript is disabled on your browser.</div>
</noscript>
<!-- ========= START OF TOP NAVBAR ======= -->
<div class="topNav"><a name="navbar.top">
<!--   -->
</a>
<div class="skipNav"><a href="#skip.navbar.top" title="Skip navigation links">Skip navigation links</a></div>
<a name="navbar.top.firstrow">
<!--   -->
</a>
<ul class="navList" title="Navigation">
<li><a href="../../../../../overview-summary.html">Overview</a></li>
<li><a href="package-summary.html">Package</a></li>
<li class="navBarCell1Rev">Class</li>
<li><a href="class-use/FunctionExecutionException.html">Use</a></li>
<li><a href="package-tree.html">Tree</a></li>
<li><a href="../../../../../deprecated-list.html">Deprecated</a></li>
<li><a href="../../../../../index-all.html">Index</a></li>
<li><a href="../../../../../help-doc.html">Help</a></li>
</ul>
<div class="aboutLanguage"><script type="text/javascript"                         src="http://cdn.mathjax.org/mathjax/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML"></script></div>
</div>
<div class="subNav">
<ul class="navList">
<li><a href="../../../../../com/datastax/driver/core/exceptions/DriverInternalError.html" title="class in com.datastax.driver.core.exceptions"><span class="typeNameLink">Prev&nbsp;Class</span></a></li>
<li><a href="../../../../../com/datastax/driver/core/exceptions/InvalidConfigurationInQueryException.html" title="class in com.datastax.driver.core.exceptions"><span class="typeNameLink">Next&nbsp;Class</span></a></li>
</ul>
<ul class="navList">
<li><a href="../../../../../index.html?com/datastax/driver/core/exceptions/FunctionExecutionException.html" target="_top">Frames</a></li>
<li><a href="FunctionExecutionException.html" target="_top">No&nbsp;Frames</a></li>
</ul>
<ul class="navList" id="allclasses_navbar_top">
<li><a href="../../../../../allclasses-noframe.html">All&nbsp;Classes</a></li>
</ul>
<div>
<script type="text/javascript"><!--
  allClassesLink = document.getElementById("allclasses_navbar_top");
  if(window==top) {
    allClassesLink.style.display = "block";
  }
  else {
    allClassesLink.style.display = "none";
  }
  //-->
</script>
</div>
<div>
<ul class="subNavList">
<li>Summary:&nbsp;</li>
<li>Nested&nbsp;|&nbsp;</li>
<li>Field&nbsp;|&nbsp;</li>
<li><a href="#constructor.summary">Constr</a>&nbsp;|&nbsp;</li>
<li><a href="#method.summary">Method</a></li>
</ul>
<ul class="subNavList">
<li>Detail:&nbsp;</li>
<li>Field&nbsp;|&nbsp;</li>
<li><a href="#constructor.detail">Constr</a>&nbsp;|&nbsp;</li>
<li><a href="#method.detail">Method</a></li>
</ul>
</div>
<a name="skip.navbar.top">
<!--   -->
</a></div>
<!-- ========= END OF TOP NAVBAR ========= -->
<!-- ======== START OF CLASS DATA ======== -->
<div class="header">
<div class="subTitle">com.datastax.driver.core.exceptions</div>
<h2 title="Class FunctionExecutionException" class="title">Class FunctionExecutionException</h2>
</div>
<div class="contentContainer">
<ul class="inheritance">
<li><a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true" title="class or interface in java.lang">java.lang.Object</a></li>
<li>
<ul class="inheritance">
<li><a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Throwable.html?is-external=true" title="class or interface in java.lang">java.lang.Throwable</a></li>
<li>
<ul class="inheritance">
<li><a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Exception.html?is-external=true" title="class or interface in java.lang">java.lang.Exception</a></li>
<li>
<ul class="inheritance">
<li><a href="https://docs.oracle.com/javase/8/docs/api/java/lang/RuntimeException.html?is-external=true" title="class or interface in java.lang">java.lang.RuntimeException</a></li>
<li>
<ul class="inheritance">
<li><a href="../../../../../com/datastax/driver/core/exceptions/DriverException.html" title="class in com.datastax.driver.core.exceptions">com.datastax.driver.core.exceptions.DriverException</a></li>
<li>
<ul class="inheritance">
<li><a href="../../../../../com/datastax/driver/core/exceptions/QueryExecutionException.html" title="class in com.datastax.driver.core.exceptions">com.datastax.driver.core.exceptions.QueryExecutionException</a></li>
<li>
<ul class="inheritance">
<li>com.datastax.driver.core.exceptions.FunctionExecutionException</li>
</ul>
</li>
</ul>
</li>
</ul>
</li>
</ul>
</li>
</ul>
</li>
</ul>
</li>
</ul>
<div class="description">
<ul class="blockList">
<li class="blockList">
<dl>
<dt>All Implemented Interfaces:</dt>
<dd><a href="../../../../../com/datastax/driver/core/exceptions/CoordinatorException.html" title="interface in com.datastax.driver.core.exceptions">CoordinatorException</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/io/Serializable.html?is-external=true" title="class or interface in java.io">Serializable</a></dd>
</dl>
<hr>
<br>
<pre>public class <span class="typeNameLabel">FunctionExecutionException</span>
extends <a href="../../../../../com/datastax/driver/core/exceptions/QueryExecutionException.html" title="class in com.datastax.driver.core.exceptions">QueryExecutionException</a>
implements <a href="../../../../../com/datastax/driver/core/exceptions/CoordinatorException.html" title="interface in com.datastax.driver.core.exceptions">CoordinatorException</a></pre>
<div class="block">Error during the execution of a function.</div>
<dl>
<dt><span class="seeLabel">See Also:</span></dt>
<dd><a href="../../../../../serialized-form.html#com.datastax.driver.core.exceptions.FunctionExecutionException">Serialized Form</a></dd>
</dl>
</li>
</ul>
</div>
<div class="summary">
<ul class="blockList">
<li class="blockList">
<!-- ======== CONSTRUCTOR SUMMARY ======== -->
<ul class="blockList">
<li class="blockList"><a name="constructor.summary">
<!--   -->
</a>
<h3>Constructor Summary</h3>
<table class="memberSummary" border="0" cellpadding="3" cellspacing="0" summary="Constructor Summary table, listing constructors, and an explanation">
<caption><span>Constructors</span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colOne" scope="col">Constructor and Description</th>
</tr>
<tr class="altColor">
<td class="colOne"><code><span class="memberNameLink"><a href="../../../../../com/datastax/driver/core/exceptions/FunctionExecutionException.html#FunctionExecutionException-java.net.InetSocketAddress-java.lang.String-">FunctionExecutionException</a></span>(<a href="https://docs.oracle.com/javase/8/docs/api/java/net/InetSocketAddress.html?is-external=true" title="class or interface in java.net">InetSocketAddress</a>&nbsp;address,
                          <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/String.html?is-external=true" title="class or interface in java.lang">String</a>&nbsp;msg)</code>&nbsp;</td>
</tr>
</table>
</li>
</ul>
<!-- ========== METHOD SUMMARY =========== -->
<ul class="blockList">
<li class="blockList"><a name="method.summary">
<!--   -->
</a>
<h3>Method Summary</h3>
<table class="memberSummary" border="0" cellpadding="3" cellspacing="0" summary="Method Summary table, listing methods, and an explanation">
<caption><span id="t0" class="activeTableTab"><span>All Methods</span><span class="tabEnd">&nbsp;</span></span><span id="t2" class="tableTab"><span><a href="javascript:show(2);">Instance Methods</a></span><span class="tabEnd">&nbsp;</span></span><span id="t4" class="tableTab"><span><a href="javascript:show(8);">Concrete Methods</a></span><span class="tabEnd">&nbsp;</span></span></caption>
<tr>
<th class="colFirst" scope="col">Modifier and Type</th>
<th class="colLast" scope="col">Method and Description</th>
</tr>
<tr id="i0" class="altColor">
<td class="colFirst"><code><a href="../../../../../com/datastax/driver/core/exceptions/DriverException.html" title="class in com.datastax.driver.core.exceptions">DriverException</a></code></td>
<td class="colLast"><code><span class="memberNameLink"><a href="../../../../../com/datastax/driver/core/exceptions/FunctionExecutionException.html#copy--">copy</a></span>()</code>
<div class="block">Copy the exception.</div>
</td>
</tr>
<tr id="i1" class="rowColor">
<td class="colFirst"><code><a href="https://docs.oracle.com/javase/8/docs/api/java/net/InetSocketAddress.html?is-external=true" title="class or interface in java.net">InetSocketAddress</a></code></td>
<td class="colLast"><code><span class="memberNameLink"><a href="../../../../../com/datastax/driver/core/exceptions/FunctionExecutionException.html#getAddress--">getAddress</a></span>()</code>
<div class="block">The full address of the coordinator host that was contacted.</div>
</td>
</tr>
<tr id="i2" class="altColor">
<td class="colFirst"><code><a href="https://docs.oracle.com/javase/8/docs/api/java/net/InetAddress.html?is-external=true" title="class or interface in java.net">InetAddress</a></code></td>
<td class="colLast"><code><span class="memberNameLink"><a href="../../../../../com/datastax/driver/core/exceptions/FunctionExecutionException.html#getHost--">getHost</a></span>()</code>
<div class="block">The coordinator host that was contacted.</div>
</td>
</tr>
</table>
<ul class="blockList">
<li class="blockList"><a name="methods.inherited.from.class.java.lang.Throwable">
<!--   -->
</a>
<h3>Methods inherited from class&nbsp;java.lang.<a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Throwable.html?is-external=true" title="class or interface in java.lang">Throwable</a></h3>
<code><a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Throwable.html?is-external=true#addSuppressed-java.lang.Throwable-" title="class or interface in java.lang">addSuppressed</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Throwable.html?is-external=true#fillInStackTrace--" title="class or interface in java.lang">fillInStackTrace</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Throwable.html?is-external=true#getCause--" title="class or interface in java.lang">getCause</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Throwable.html?is-external=true#getLocalizedMessage--" title="class or interface in java.lang">getLocalizedMessage</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Throwable.html?is-external=true#getMessage--" title="class or interface in java.lang">getMessage</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Throwable.html?is-external=true#getStackTrace--" title="class or interface in java.lang">getStackTrace</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Throwable.html?is-external=true#getSuppressed--" title="class or interface in java.lang">getSuppressed</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Throwable.html?is-external=true#initCause-java.lang.Throwable-" title="class or interface in java.lang">initCause</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Throwable.html?is-external=true#printStackTrace--" title="class or interface in java.lang">printStackTrace</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Throwable.html?is-external=true#printStackTrace-java.io.PrintStream-" title="class or interface in java.lang">printStackTrace</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Throwable.html?is-external=true#printStackTrace-java.io.PrintWriter-" title="class or interface in java.lang">printStackTrace</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Throwable.html?is-external=true#setStackTrace-java.lang.StackTraceElement:A-" title="class or interface in java.lang">setStackTrace</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Throwable.html?is-external=true#toString--" title="class or interface in java.lang">toString</a></code></li>
</ul>
<ul class="blockList">
<li class="blockList"><a name="methods.inherited.from.class.java.lang.Object">
<!--   -->
</a>
<h3>Methods inherited from class&nbsp;java.lang.<a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true" title="class or interface in java.lang">Object</a></h3>
<code><a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true#clone--" title="class or interface in java.lang">clone</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true#equals-java.lang.Object-" title="class or interface in java.lang">equals</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true#finalize--" title="class or interface in java.lang">finalize</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true#getClass--" title="class or interface in java.lang">getClass</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true#hashCode--" title="class or interface in java.lang">hashCode</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true#notify--" title="class or interface in java.lang">notify</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true#notifyAll--" title="class or interface in java.lang">notifyAll</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true#wait--" title="class or interface in java.lang">wait</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true#wait-long-" title="class or interface in java.lang">wait</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true#wait-long-int-" title="class or interface in java.lang">wait</a></code></li>
</ul>
</li>
</ul>
</li>
</ul>
</div>
<div class="details">
<ul class="blockList">
<li class="blockList">
<!-- ========= CONSTRUCTOR DETAIL ======== -->
<ul class="blockList">
<li class="blockList"><a name="constructor.detail">
<!--   -->
</a>
<h3>Constructor Detail</h3>
<a name="FunctionExecutionException-java.net.InetSocketAddress-java.lang.String-">
<!--   -->
</a>
<ul class="blockListLast">
<li class="blockList">
<h4>FunctionExecutionException</h4>
<pre>public&nbsp;FunctionExecutionException(<a href="https://docs.oracle.com/javase/8/docs/api/java/net/InetSocketAddress.html?is-external=true" title="class or interface in java.net">InetSocketAddress</a>&nbsp;address,
                                  <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/String.html?is-external=true" title="class or interface in java.lang">String</a>&nbsp;msg)</pre>
</li>
</ul>
</li>
</ul>
<!-- ============ METHOD DETAIL ========== -->
<ul class="blockList">
<li class="blockList"><a name="method.detail">
<!--   -->
</a>
<h3>Method Detail</h3>
<a name="getHost--">
<!--   -->
</a>
<ul class="blockList">
<li class="blockList">
<h4>getHost</h4>
<pre>public&nbsp;<a href="https://docs.oracle.com/javase/8/docs/api/java/net/InetAddress.html?is-external=true" title="class or interface in java.net">InetAddress</a>&nbsp;getHost()</pre>
<div class="block">The coordinator host that was contacted.
 <p/>
 This is a shortcut for <a href="https://docs.oracle.com/javase/8/docs/api/java/net/InetSocketAddress.html?is-external=true#getAddress--" title="class or interface in java.net"><code>getAddress().getAddress()</code></a>.</div>
<dl>
<dt><span class="overrideSpecifyLabel">Specified by:</span></dt>
<dd><code><a href="../../../../../com/datastax/driver/core/exceptions/CoordinatorException.html#getHost--">getHost</a></code>&nbsp;in interface&nbsp;<code><a href="../../../../../com/datastax/driver/core/exceptions/CoordinatorException.html" title="interface in com.datastax.driver.core.exceptions">CoordinatorException</a></code></dd>
<dt><span class="returnLabel">Returns:</span></dt>
<dd>The coordinator host that was contacted;
 may be <code>null</code> if the coordinator is not known.</dd>
</dl>
</li>
</ul>
<a name="getAddress--">
<!--   -->
</a>
<ul class="blockList">
<li class="blockList">
<h4>getAddress</h4>
<pre>public&nbsp;<a href="https://docs.oracle.com/javase/8/docs/api/java/net/InetSocketAddress.html?is-external=true" title="class or interface in java.net">InetSocketAddress</a>&nbsp;getAddress()</pre>
<div class="block">The full address of the coordinator host that was contacted.</div>
<dl>
<dt><span class="overrideSpecifyLabel">Specified by:</span></dt>
<dd><code><a href="../../../../../com/datastax/driver/core/exceptions/CoordinatorException.html#getAddress--">getAddress</a></code>&nbsp;in interface&nbsp;<code><a href="../../../../../com/datastax/driver/core/exceptions/CoordinatorException.html" title="interface in com.datastax.driver.core.exceptions">CoordinatorException</a></code></dd>
<dt><span class="returnLabel">Returns:</span></dt>
<dd>the full address of the coordinator host that was contacted;
 may be <code>null</code> if the coordinator is not known.</dd>
</dl>
</li>
</ul>
<a name="copy--">
<!--   -->
</a>
<ul class="blockListLast">
<li class="blockList">
<h4>copy</h4>
<pre>public&nbsp;<a href="../../../../../com/datastax/driver/core/exceptions/DriverException.html" title="class in com.datastax.driver.core.exceptions">DriverException</a>&nbsp;copy()</pre>
<div class="block"><span class="descfrmTypeLabel">Description copied from class:&nbsp;<code><a href="../../../../../com/datastax/driver/core/exceptions/DriverException.html#copy--">DriverException</a></code></span></div>
<div class="block">Copy the exception.
 <p/>
 This returns a new exception, equivalent to the original one, except that
 because a new object is created in the current thread, the top-most
 element in the stacktrace of the exception will refer to the current
 thread (this is mainly intended for internal use by the driver). The cause of
 the copied exception will be the original exception.</div>
<dl>
<dt><span class="overrideSpecifyLabel">Overrides:</span></dt>
<dd><code><a href="../../../../../com/datastax/driver/core/exceptions/DriverException.html#copy--">copy</a></code>&nbsp;in class&nbsp;<code><a href="../../../../../com/datastax/driver/core/exceptions/DriverException.html" title="class in com.datastax.driver.core.exceptions">DriverException</a></code></dd>
<dt><span class="returnLabel">Returns:</span></dt>
<dd>a copy/clone of this exception.</dd>
</dl>
</li>
</ul>
</li>
</ul>
</li>
</ul>
</div>
</div>
<!-- ========= END OF CLASS DATA ========= -->
<!-- ======= START OF BOTTOM NAVBAR ====== -->
<div class="bottomNav"><a name="navbar.bottom">
<!--   -->
</a>
<div class="skipNav"><a href="#skip.navbar.bottom" title="Skip navigation links">Skip navigation links</a></div>
<a name="navbar.bottom.firstrow">
<!--   -->
</a>
<ul class="navList" title="Navigation">
<li><a href="../../../../../overview-summary.html">Overview</a></li>
<li><a href="package-summary.html">Package</a></li>
<li class="navBarCell1Rev">Class</li>
<li><a href="class-use/FunctionExecutionException.html">Use</a></li>
<li><a href="package-tree.html">Tree</a></li>
<li><a href="../../../../../deprecated-list.html">Deprecated</a></li>
<li><a href="../../../../../index-all.html">Index</a></li>
<li><a href="../../../../../help-doc.html">Help</a></li>
</ul>
<div class="aboutLanguage"><script type="text/javascript"                         src="http://cdn.mathjax.org/mathjax/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML"></script></div>
</div>
<div class="subNav">
<ul class="navList">
<li><a href="../../../../../com/datastax/driver/core/exceptions/DriverInternalError.html" title="class in com.datastax.driver.core.exceptions"><span class="typeNameLink">Prev&nbsp;Class</span></a></li>
<li><a href="../../../../../com/datastax/driver/core/exceptions/InvalidConfigurationInQueryException.html" title="class in com.datastax.driver.core.exceptions"><span class="typeNameLink">Next&nbsp;Class</span></a></li>
</ul>
<ul class="navList">
<li><a href="../../../../../index.html?com/datastax/driver/core/exceptions/FunctionExecutionException.html" target="_top">Frames</a></li>
<li><a href="FunctionExecutionException.html" target="_top">No&nbsp;Frames</a></li>
</ul>
<ul class="navList" id="allclasses_navbar_bottom">
<li><a href="../../../../../allclasses-noframe.html">All&nbsp;Classes</a></li>
</ul>
<div>
<script type="text/javascript"><!--
  allClassesLink = document.getElementById("allclasses_navbar_bottom");
  if(window==top) {
    allClassesLink.style.display = "block";
  }
  else {
    allClassesLink.style.display = "none";
  }
  //-->
</script>
</div>
<div>
<ul class="subNavList">
<li>Summary:&nbsp;</li>
<li>Nested&nbsp;|&nbsp;</li>
<li>Field&nbsp;|&nbsp;</li>
<li><a href="#constructor.summary">Constr</a>&nbsp;|&nbsp;</li>
<li><a href="#method.summary">Method</a></li>
</ul>
<ul class="subNavList">
<li>Detail:&nbsp;</li>
<li>Field&nbsp;|&nbsp;</li>
<li><a href="#constructor.detail">Constr</a>&nbsp;|&nbsp;</li>
<li><a href="#method.detail">Method</a></li>
</ul>
</div>
<a name="skip.navbar.bottom">
<!--   -->
</a></div>
<!-- ======== END OF BOTTOM NAVBAR ======= -->
<p class="legalCopy"><small><script type="text/javascript">                         for(var i in document.links) {                         var link = document.links[i];                         if (link.href.indexOf('is-external=true') != -1) link.target = '_blank';                         }                         </script></small></p>
</body>
</html>
