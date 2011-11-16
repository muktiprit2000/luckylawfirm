<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">

<head>
<meta content="text/html; charset=utf-8" http-equiv="Content-Type" />
<title>Untitled 1</title>
<link href="../css/masteradmin.css" rel="stylesheet" type="text/css" />


</head>

<body>

<form method="post" action="contactmanage.php">
<table class="maintable">
	<tr>
		<td><p class="BodyTitles">Administrator Area</p></td>
	</tr>
	<tr>
		<td class="colorBar"></td>
	</tr>

	<tr>
		<td>
			
		<table class="maintable">
			<tr>
				<td style="width: 30%" valign="top">
					
					<br/>
					<br/>
					<br/>
					<div>
								<dl style="width: 166px; height: 160px">
				                      &nbsp;<span class="BodyText"><dt style="width: 160px"><a href="contentmain1.php"">Content Management</a></dt></span>
				                      &nbsp;<span class="BodyText"><dt><a href="sitesettings.php">Site Setting</a></dt></span>
				                      &nbsp;<span class="BodyText"><dt><a href="contactmanage.php">Contact Us</a></dt></span>
				                      &nbsp;<span class="BodyText"><dt><a href="/practice-areas/EquitableDistribution/">Roles</a></dt></span>
				                      &nbsp;<span class="BodyText"><dt><a href="/practice-areas/Alimony/">User</a></dt></span>
				                      &nbsp;<span class="BodyText"><dt><a href="logout.php">Logout</a></dt></span>
				                      

				                 </dl>	

						
						<br />
						
						

						
					</div>
					<br/>
					<br/>
					<br/>

				</td>
				
				<td class="maintable" valign="top">
					<div >
						<br/>
						<br/>
						<p class="BodyTitles">Content Management</p>
						<br/>
					</div>
					<div>
						<table class="maintable">
						
						<tr  class="tableheader">
							<td colspan="2">View Contact Detail</td>
							
						</tr>
						<?php
						echo "<tr>".
						"<td>Full Name:</td><td>$name</td>"."</tr>	";
						echo "<tr>".
						"<td>Email:</td><td>$email</td>"."</tr>	";
						echo "<tr>".
						"<td>Telephone:</td><td>$phone</td>"."</tr>	";
						echo "<tr>".
						"<td>Subject:</td><td>$subject</td>"."</tr>	";
						echo "<tr>".
						"<td>Message</td><td>$message</td>"."</tr>	";
										    
						 ?>
						 <tr ><td colspan="2"></td></tr>
						 <tr colspan="2"><td colspan="2"><input type="submit" name="action" value="Back" /></td></tr>
						</table>
					
					</div>
					
	
				</td>
				
			</tr>
		</table>
			
		
		</td>
	</tr>

</table>

</form>
</body>

</html>
