<?php
echo "<script>location.href='index.php'</script>";
$roomname=$_POST["roomname"];
$max_amount=$_POST["max_amount"];
$style=$_POST["style"];
$phone=$_POST["phone"];
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
$db->insert("rooms",[
    "roomname"=>$roomname,
    "max_amount"=>$max_amount,
    "style"=>$style,
    "phone"=>$phone,
]);
if($result>0){
    echo "<script>location.href='index.php';</script>";
}
else{
    echo "添加失败";
}
?>