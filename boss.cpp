//
// Created by v1ncente_N1A on 2023/2/2.
//
#include"boss.h"
//构造函数
Boss::Boss(int id, string name, int deptid) {
  this->m_Id = id;
  this->m_Name = name;
  this->m_DeptId = deptid;
}
//显示个人信息
void Boss::ShowInfo() {
  cout << "职工编号:" << this->m_Id
       << "\t职工姓名:" << this->m_Name
       << "\t岗位:" << this->GetDeptName()
       << "\t岗位职责:全局管理公司所有的事物" << endl;
}
//获取岗位名称
string Boss::GetDeptName() {
  return string("老板");
}
