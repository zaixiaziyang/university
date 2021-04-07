<?php
$currid=$_GET["id"];
echo "你要删除行的id是：".$currid;
require "medoo.php";

$db = new medoo([
    // 必须配置项
    'database_type' => 'mysql',
    'database_name' => 'ziyang',
    'server' => 'localhost',
    'username' => 'root',
    'password' => 'root',
    'charset' => 'utf8', 
    // 可选参数
    'port' => 3306, 
    // 可选，定义表的前缀
    'prefix' => 'wangsir_',
]);
$db->delete("rooms",["id"=>$currid]);
header("location:index.php");
?>