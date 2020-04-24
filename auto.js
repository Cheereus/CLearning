/*
 * @Description: 
 * @Author: 陈十一
 * @Date: 2020-04-24 09:33:10
 * @LastEditTime: 2020-04-24 17:42:07
 * @LastEditors: 陈十一
 */

let t = 60 * 1000;                     // 操作间隔 60 秒
let pageItem = $('.page-name.cursor'); // PPT 目录中的所有项目
let number = pageItem.length;          // PPT 数量
let i = 8;
// 打开第 n 个 PPT
function openPPT(n){
  if($('.btn-submit').length > 0) $('.btn-submit').click(); // 如果出现挂机提示就点掉
  $(pageItem[n]).click();                // 点击列表中第 n 个
  console.info('已点击' + i + '次');
  i++;
  setTimeout(function(){
    if(n == number) openPPT(8);          
    else openPPT(n+1);
  }, t);             // 间隔 t 时间再打开下一个
}
openPPT(8);                            // 从第一个开始