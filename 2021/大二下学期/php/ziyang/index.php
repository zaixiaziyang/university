<html>
	<head>
		<meta charset="utf-8"/>
		<title></title>
		<script type="text/javascript" src="js/jquery.min.js">
			</script>
		<link rel="stylesheet" type="text/css" href="bootstrap/css/bootstrap.min.css">
		<link rel="stylesheet" type="text/css" href="bootstrap/css/bootstrap-theme.min.css">
		<script type="text/javascript" src="bootstrap/js/bootstrap.min.js">
			</script>
		<script>
			function showaddface(){
				location.href="add.php"
			}
			function dodelete(n){
				var result=confirm("你确定要删除吗？");
				if(result){
					// alert("准备删除......"+n);
					location.href="del.php?id="+n;
				}
			}
		</script>
	</head>
	<body>
		<center><h3>音乐厅信息</h3></center>
		<hr />
		<div style="width:600px;margin:0px auto">
		<div class="btn-group" role="group" aria-label="...">
  <button type="button" class="btn btn-primary btn-sm" onclick="showaddface()">
	  <span class="glyphicon glyphicon-edit" aria-hidden="true" >
	  </span>新增</button>
  <button type="button" class="btn btn-info btn-sm">
	  <span class="glyphicon glyphicon-zoom-in" aria-hidden="true">
	  </span>查询</button>
<div>
			
		</div>
		<table class="table table-bordered table-condensed" border=1 style="width:600px;margin:0px auto">
			<tr>
				<td>序号</td>
				<td>家具</td>
				<td>数量</td>
				<td>风格</td>
				<td>电话</td>
			</tr>

<?php
require "medoo.php";
$db = new medoo([
    // 必须配置项
    'database_type' => 'mysql',
    'database_name' => 'ziyang01',
    'server' => 'localhost',
    'username' => 'root',
    'password' => 'root',
    'charset' => 'utf8', 
    // 可选参数
    'port' => 3306, 
    // 可选，定义表的前缀
    'prefix' => 'wangsir_',
]);
$data=$db->select("rooms","*");
foreach($data as $k=>$v){
	echo "<tr>";
	foreach($v as $kk=>$vv){
		echo "<td>".$vv."</td>";
		if($kk=="id"){
			$currid=$vv;
		}
	}
	echo "<td><button type='button' onclick='dodelete(".$currid.")' class='btn btn-danger btn-xs'>
	<span class='glyphicon glyphicon-remove' aria-hidden='true'></span>
	删除</button>&nbsp;修改</td></tr>";
}
?>
		</table>
	</body>
</html>