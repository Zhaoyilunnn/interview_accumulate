//
// Created by zyl on 2020/2/27.
//

#ifndef INTERVIEW_ACCUMULATE_FUNCTIONS_H
#define INTERVIEW_ACCUMULATE_FUNCTIONS_H

#include <vector>
#include <string>

using namespace std;

/* definition of tree */
struct treeNode {
    treeNode* right = nullptr;
    treeNode* left = nullptr;
    int val = 0;
    explicit treeNode(int x): val(x), left(nullptr), right(nullptr) {}
};

/* definition of list */
struct listNode {
    int val;
    listNode* next;
};

/* ByteDance 基础架构, 02/20/2020, 找到有序二叉树的第K大的元素, 似乎中序遍历就可以了... */
treeNode* findKMax(int k, treeNode* root);


/* DingDing 02/25/2020 */
// task 1 --> 假设一个很大数据，比如100万的vector<int>元素都是10以内的整数，写一个函数删除某个元素
//            注意在erase之后要保存it的位置
void erase(vector<int>& vctNums, int num);
// task 2 --> 写一个memcpy
void *memcpy(void* dest, const void* val, std::size_t count);


/* Tencent 02/25/2020 判断二叉树是否是对称二叉树 */
bool symmetryTree(treeNode* root);


/* ByteDance 客户端开发 03/02/2020 */
// task 1 --> 反转字符串, e.g. input > @@hello@world@, output > @world@hello@@
string reverseStr(string& strIn);
// task 2 --> 直接插入排序,
vector<int> insertSort(vector<int>& vctIn);


/* Baidu 基础架构 03/19/2020 */
listNode* deleteLastNNode(listNode* head, int n);
listNode* deleteLastNNodePlus(listNode* head, int n);
int binarySearch(vector<int> nums, int num);


/*******************************************/
/* Baidu 搜索架构 03/10/2020                */
/* 待解决                                   */
/*******************************************/
struct Dep {
    int task_id;
    int dep_task_id;
};
/*vector<int> task_execute(vector<Dep> deps) {
    if (deps.empty())
        return {};
    vector<int> result;
    result.push_back(deps[0].dep_task_id);
    result.push_back(deps[0].task_id);
    if (deps.size() == 1)
        return result;
    int dep_post = 0;
    int id_post = 0;
    bool dep_flag = false;
    bool id_flag = false;
    for (int i = 1; i < deps.size(); i++) {
        dep_flag = false;
        id_flag = false;
        for (int j = result.size()-1; j >= 0; j--) {
            if (deps[i].dep_task_id == result[j]) {
                if (!dep_flag) {
                    dep_post = j;
                    dep_flag = true;
                }
            }
            if (deps[i].task_id == result[j]) {
                if (!id_flag) {
                    id_post = j;
                    id_flag = true;
                }
            }
        }
        if (!dep_flag) {
            result.push_back(deps[i].dep_task_id);
            result.push_back(deps[i].task_id);
        } else if (id_flag && id_post >= dep_post) {
            result.insert(result.begin()+dep_post, deps[i].dep_task_id);
            result.insert(result.begin()+id_post+1, deps[i].task_id);
        } else {
            result.insert(result.begin()+dep_post, deps[i].dep_task_id);
            result.insert(result.begin()+dep_post+1, deps[i].task_id);
        }
    }
    return result;
}*/


/********************************************************************/
/* 给定一组扑克牌从A--10 （A代表1），每张牌最多四张，随机从中抽取一些发给小明
 * 出牌方式如下：
 *              1. 单张牌
 *              2. 对子
 *              3. 三个连对
 *              4. 连续五张牌（顺子）
 * 求最少出牌次数
 * 例子: 输入{1, 1, 1, 2, 2, 2, 2, 2, 1, 1}, 每个元素代表相应的牌的数量
 * 最少次数为3: A 2 3 4 5, 4 5 6 7 8, 6 7 8 9 10 */
/*******************************************************************/
int minimumNumber(vector<int>& nums);

/********************************************************************/
/* 小红弹琴，每次都弹一个升序字符串，例如aaa bbb abc abcde
 * 给定弹琴次数，和每次谈的字符串，求用这些字符串所能组合出的最长升序字符串长度：
 * 例子: 输入4, {aaa, bcd, zzz, bcdef}, 每个元素代表每次弹的字符串
 * 最少次数为11: aaabcdefzzz */
/*******************************************************************/

#endif //INTERVIEW_ACCUMULATE_FUNCTIONS_H
