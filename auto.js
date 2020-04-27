/*
 * @Description: 优学院课件学习时长自动脚本 
 * @Author: 陈十一
 * @Date: 2020-04-24 09:33:10
 * @LastEditTime: 2020-04-27 09:44:56
 * @LastEditors: 陈十一
 */

// 打开课件学习页面，复制到浏览器控制台，回车运行即可，脚本会自动循环点击每一章节的 PPT
// 可能会出现服务器返回防刷分然后页面被刷新的情况，重新在控制台运行一遍即可，经验表明，这种情况基本上只在晚上出现
let t = 60 * 1000;                     // 操作间隔 60 秒
let pageItem = $('.page-name.cursor'); // PPT 目录中的所有项目
let number = pageItem.length;          // PPT 数量
let i = 0;
// 打开第 n 个 PPT
function openPPT(n){
  if($('.btn-submit').length > 0) $('.btn-submit').click(); // 如果出现挂机提示就点掉
  $(pageItem[n]).click();              // 点击列表中第 n 个
  console.info('已点击' + i + '次');
  i++;
  setTimeout(function(){
    if(n == number) openPPT(0);          
    else openPPT(n+1);
  }, t);                               // 间隔 t 时间再打开下一个
}
openPPT(0)                             // 从第一个开始                         