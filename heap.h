/*  用c++的vector实现二叉堆(最大堆、最小堆)
 *   author: longzy
 *   email: longzysin@163.com
 *   weixin: lzy-ontheway
 */
 
 #ifndef _HEAP_H_
 #define _HEAP_H_
 
 #include <vector>
 
 /****************************
  * 初始化二叉堆
  *  heap：初始化数据
  *  type: 堆的类型
  *        0: 最大堆
  *        1：最小堆
  ****************************/
void initHeap(const std::vector<int> &heap,int type=0);

//构建堆
void makeHeap();

//构建最大堆
void makeMaxHeap(int start, int end);
//构建最小堆
void makeMinHeap(int start, int end);

//调整最大堆
void ajustMaxHeap(int start, int end);
//调整最小堆
void ajustMinHeap(int start, int end);

//插入
void pushHeap(int value);
//弹出
void popHeap();

//获取堆顶元素
int getTop();

//打印堆内容
void printHeap();
 
 #endif
 
 
