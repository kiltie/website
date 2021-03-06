<?php

  include( "functions.inc" );

  unset( $_POST['bcarray'] );
  unset( $_GET['bcarray'] );

  $breadcrumb = "";

  if( empty( $bcarray ) )
  {
    $breadcrumb = "Welcome to the Official Home of the Band Without Pants! -<u> 100 Years of Excellence </u>";
  }
  else
  {
    $breadcrumb = '<a style="color:#ffffff;" href="index.cgi">Home</a>';

    foreach( $bcarray as $bc )
    {
      if( strlen($bc[1]) > 0 )
      {
        $breadcrumb .= ' &gt; <a style="color:#ffffff;" href="' . $bc[1] . '">'. $bc[0] . '</a>';
      }
      else
      {
        $breadcrumb .= ' &gt; ' . $bc[0];
      }
    }
  }

?>

<html>
<head>
  <title>CMU Kiltie Band - A Tradition Since 1908</title>
  <link rel="stylesheet" type="text/css" href="style.css">
  <script language="Javascript">
    function emailer(username,domain) {
      document.write('<a href="mailto:'+username+'@'+domain+'">'+username+'@'+domain+'</a>');
    }
    function emailer2(username,domain,text) {
      document.write('<a href="mailto:'+username+'@'+domain+'">'+text+'</a>');
    }
  </script>
</head>
<body>

<div align="center">
<table width="779" border="0" cellpadding="0" cellspacing="1" bgcolor="#000000">
  <tr>
    <td width="100%">
      <a href="index.cgi"><img src="images/title.jpg" width="779" height="120" border="0" alt="Carnegie Mellon University Kiltie Band - A Tradition Since 1908"></a><br>
    </td>
  </tr>
  <tr>
    <td bgcolor="#660000" height="30" valign="center">
      <table width="100%" border="0" cellpadding="5" cellspacing="2">
        <tr>
          <td>
            <!-- <span class="breadcrumb"><a href="" style="font-size:12px;color:#FFFFFF;text-decoration:Underline;">Home</a> > <a href="" style="font-size:12px;color:#FFFFFF;text-decoration:Underline;">Members</a> > Attendance Policy</span> -->
            <span class="breadcrumb"><?php echo $breadcrumb; ?></span>
          </td>
        </tr>
      </table>
    </td>
  </tr>
  <tr>
    <td bgcolor="#FFFFFF" valign="top">
      <table width="100%" border="0" cellpadding="8" cellspacing="2">
        <tr>
          <td width="180" valign="top" rowspan="2">

            <table width="100%" border="0" cellpadding="0" cellspacing="1" bgcolor="#000000">
              <tr>
                <td>
                  <img src="images/mainmenu.jpg" width="180" height="24" alt="Main Menu"><br>
                </td>
              </tr>
              <tr>
                <td bgcolor="#FFFFFF">
                  <table width="100%" border="0" cellpadding="3" cellspacing="1">
                    <tr>
                      <td>
                        <H3>The Usual</H3>
                        <li><a href="index.cgi" class="menuitem">Home</a><br>
                        <li><a href="past.cgi" class="menuitem">Our Story</a><br>
                        <li><a href="officers.cgi" class="menuitem">Officers</a><br>
                        <li><a href="presidents.cgi" class="menuitem">Former Presidents</a><br>
                        <li><a href="rehearsals.cgi" class="menuitem">Rehearsal Schedule</a><br>
                        <li><a href="attendance.cgi" class="menuitem">Attendance Policy</a><br>
                        <li><a href="constitution.cgi" class="menuitem">Band Constitution</a><br>
                        <li><a href="contact.cgi" class="menuitem">Contact Us</a><br><br>

                        <H3>The Unusual</H3>
                        <li><a href="sections.cgi" class="menuitem">Band Sections</a><br>
                        <li><a href="traditions.cgi" class="menuitem">Kiltie Traditions</a><br>
                        <li><a href="kiltietimes.cgi" class="menuitem">The Kiltie Times</a><br>
                        <li><a href="lyrics.cgi" class="menuitem">Cheers & Lyrics</a><br>
                        <li><a href="photos.cgi" class="menuitem">Photos</a><br>
                        <li><a href="music.cgi" class="menuitem">Music</a><br><br>

                        <H3>The Fun</H3>
                        <li><a href="imsports.cgi" class="menuitem">IM Sports</a><br>
                        <li><a href="carnival.cgi" class="menuitem">Spring Carnival</a><br>

                      </td>
                    </tr>
                  </table>
                </td>
              </tr>
            </table><p>

            <table width="100%" border="0" cellpadding="0" cellspacing="1" bgcolor="#000000">
              <tr>
                <td>
                  <img src="images/events.jpg" width="180" height="24" alt="Upcoming Events"><br>
                </td>
              </tr>
              <tr>
                <td bgcolor="#FFFFFF">
                  <table width="100%" border="0" cellpadding="3" cellspacing="1">
			<tr>
                      <td>
                        <span class="sidebartext">
                          <b>Holiday Concert</b><br>
                          Thursday December 3rd, 2015 <br>
                          5:30pm<br>
                          Kirr Commons, CUC<br>
                          <br>
                          <b>Mid Winter Concert</b><br>
                          Monday February 29th, 2016 <br>
                          7:30pm <br>
                          Rangos Ballroom, CUC<br>
                          <br>
                          <b>Spring Carnival Concert</b><br>
                          Thursday April 14th, 2016 <br>
                          3:30pm <br>
                          CFA Lawn <br>
                        </span><p>
                      </td>
                    </tr>

                  </table>
                </td>
          	</tr>
            </table>

          </td>
          <td width="100%" valign="top">
            <table width="100%" border="0" cellpadding="0" cellspacing="0">
              <tr>
                <td>
                  <!-- BEGIN CONTENT -->

