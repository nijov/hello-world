<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<!-- NewPage -->
<html lang="en">
<head>
<!-- Generated by javadoc (1.8.0_66) on Thu Jan 28 16:09:49 CET 2016 -->
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>Uses of Class com.datastax.driver.core.TypeCodec.PrimitiveIntCodec (DataStax Java Driver for Apache Cassandra - Binary distribution 3.0.0 API)</title>
<meta name="date" content="2016-01-28">
<link rel="stylesheet" type="text/css" href="../../../../../stylesheet.css" title="Style">
<script type="text/javascript" src="../../../../../script.js"></script>
</head>
<body>
<script type="text/javascript"><!--
    try {
        if (location.href.indexOf('is-external=true') == -1) {
            parent.document.title="Uses of Class com.datastax.driver.core.TypeCodec.PrimitiveIntCodec (DataStax Java Driver for Apache Cassandra - Binary distribution 3.0.0 API)";
        }
    }
    catch(err) {
    }
//-->
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
<li><a href="../package-summary.html">Package</a></li>
<li><a href="../../../../../com/datastax/driver/core/TypeCodec.PrimitiveIntCodec.html" title="class in com.datastax.driver.core">Class</a></li>
<li class="navBarCell1Rev">Use</li>
<li><a href="../package-tree.html">Tree</a></li>
<li><a href="../../../../../deprecated-list.html">Deprecated</a></li>
<li><a href="../../../../../index-all.html">Index</a></li>
<li><a href="../../../../../help-doc.html">Help</a></li>
</ul>
<div class="aboutLanguage"><script type="text/javascript"                         src="http://cdn.mathjax.org/mathjax/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML"></script></div>
</div>
<div class="subNav">
<ul class="navList">
<li>Prev</li>
<li>Next</li>
</ul>
<ul class="navList">
<li><a href="../../../../../index.html?com/datastax/driver/core/class-use/TypeCodec.PrimitiveIntCodec.html" target="_top">Frames</a></li>
<li><a href="TypeCodec.PrimitiveIntCodec.html" target="_top">No&nbsp;Frames</a></li>
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
<a name="skip.navbar.top">
<!--   -->
</a></div>
<!-- ========= END OF TOP NAVBAR ========= -->
<div class="header">
<h2 title="Uses of Class com.datastax.driver.core.TypeCodec.PrimitiveIntCodec" class="title">Uses of Class<br>com.datastax.driver.core.TypeCodec.PrimitiveIntCodec</h2>
</div>
<div class="classUseContainer">
<ul class="blockList">
<li class="blockList">
<table class="useSummary" border="0" cellpadding="3" cellspacing="0" summary="Use table, listing packages, and an explanation">
<caption><span>Packages that use <a href="../../../../../com/datastax/driver/core/TypeCodec.PrimitiveIntCodec.html" title="class in com.datastax.driver.core">TypeCodec.PrimitiveIntCodec</a></span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colFirst" scope="col">Package</th>
<th class="colLast" scope="col">Description</th>
</tr>
<tbody>
<tr class="altColor">
<td class="colFirst"><a href="#com.datastax.driver.core">com.datastax.driver.core</a></td>
<td class="colLast">
<div class="block">The main package for the DataStax Java driver for Cassandra.</div>
</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><a href="#com.datastax.driver.extras.codecs.date">com.datastax.driver.extras.codecs.date</a></td>
<td class="colLast">
<div class="block">This package contains a collection of convenience
 <a href="../../../../../com/datastax/driver/core/TypeCodec.html" title="class in com.datastax.driver.core"><code>TypeCodec</code></a> instances useful for
 serializing between CQL temporal types and Java primitive types.</div>
</td>
</tr>
</tbody>
</table>
</li>
<li class="blockList">
<ul class="blockList">
<li class="blockList"><a name="com.datastax.driver.core">
<!--   -->
</a>
<h3>Uses of <a href="../../../../../com/datastax/driver/core/TypeCodec.PrimitiveIntCodec.html" title="class in com.datastax.driver.core">TypeCodec.PrimitiveIntCodec</a> in <a href="../../../../../com/datastax/driver/core/package-summary.html">com.datastax.driver.core</a></h3>
<table class="useSummary" border="0" cellpadding="3" cellspacing="0" summary="Use table, listing methods, and an explanation">
<caption><span>Methods in <a href="../../../../../com/datastax/driver/core/package-summary.html">com.datastax.driver.core</a> that return <a href="../../../../../com/datastax/driver/core/TypeCodec.PrimitiveIntCodec.html" title="class in com.datastax.driver.core">TypeCodec.PrimitiveIntCodec</a></span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colFirst" scope="col">Modifier and Type</th>
<th class="colLast" scope="col">Method and Description</th>
</tr>
<tbody>
<tr class="altColor">
<td class="colFirst"><code>static <a href="../../../../../com/datastax/driver/core/TypeCodec.PrimitiveIntCodec.html" title="class in com.datastax.driver.core">TypeCodec.PrimitiveIntCodec</a></code></td>
<td class="colLast"><span class="typeNameLabel">TypeCodec.</span><code><span class="memberNameLink"><a href="../../../../../com/datastax/driver/core/TypeCodec.html#cint--">cint</a></span>()</code>
<div class="block">Return the default codec for the CQL type <code>int</code>.</div>
</td>
</tr>
</tbody>
</table>
</li>
<li class="blockList"><a name="com.datastax.driver.extras.codecs.date">
<!--   -->
</a>
<h3>Uses of <a href="../../../../../com/datastax/driver/core/TypeCodec.PrimitiveIntCodec.html" title="class in com.datastax.driver.core">TypeCodec.PrimitiveIntCodec</a> in <a href="../../../../../com/datastax/driver/extras/codecs/date/package-summary.html">com.datastax.driver.extras.codecs.date</a></h3>
<table class="useSummary" border="0" cellpadding="3" cellspacing="0" summary="Use table, listing subclasses, and an explanation">
<caption><span>Subclasses of <a href="../../../../../com/datastax/driver/core/TypeCodec.PrimitiveIntCodec.html" title="class in com.datastax.driver.core">TypeCodec.PrimitiveIntCodec</a> in <a href="../../../../../com/datastax/driver/extras/codecs/date/package-summary.html">com.datastax.driver.extras.codecs.date</a></span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colFirst" scope="col">Modifier and Type</th>
<th class="colLast" scope="col">Class and Description</th>
</tr>
<tbody>
<tr class="altColor">
<td class="colFirst"><code>class&nbsp;</code></td>
<td class="colLast"><code><span class="memberNameLink"><a href="../../../../../com/datastax/driver/extras/codecs/date/SimpleDateCodec.html" title="class in com.datastax.driver.extras.codecs.date">SimpleDateCodec</a></span></code>
<div class="block">A <a href="../../../../../com/datastax/driver/core/TypeCodec.html" title="class in com.datastax.driver.core"><code>TypeCodec</code></a> that maps CQL dates to Java primitive ints,
 representing the number of days since the Epoch.</div>
</td>
</tr>
</tbody>
</table>
</li>
</ul>
</li>
</ul>
</div>
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
<li><a href="../package-summary.html">Package</a></li>
<li><a href="../../../../../com/datastax/driver/core/TypeCodec.PrimitiveIntCodec.html" title="class in com.datastax.driver.core">Class</a></li>
<li class="navBarCell1Rev">Use</li>
<li><a href="../package-tree.html">Tree</a></li>
<li><a href="../../../../../deprecated-list.html">Deprecated</a></li>
<li><a href="../../../../../index-all.html">Index</a></li>
<li><a href="../../../../../help-doc.html">Help</a></li>
</ul>
<div class="aboutLanguage"><script type="text/javascript"                         src="http://cdn.mathjax.org/mathjax/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML"></script></div>
</div>
<div class="subNav">
<ul class="navList">
<li>Prev</li>
<li>Next</li>
</ul>
<ul class="navList">
<li><a href="../../../../../index.html?com/datastax/driver/core/class-use/TypeCodec.PrimitiveIntCodec.html" target="_top">Frames</a></li>
<li><a href="TypeCodec.PrimitiveIntCodec.html" target="_top">No&nbsp;Frames</a></li>
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
<a name="skip.navbar.bottom">
<!--   -->
</a></div>
<!-- ======== END OF BOTTOM NAVBAR ======= -->
<p class="legalCopy"><small><script type="text/javascript">                         for(var i in document.links) {                         var link = document.links[i];                         if (link.href.indexOf('is-external=true') != -1) link.target = '_blank';                         }                         </script></small></p>
</body>
</html>
