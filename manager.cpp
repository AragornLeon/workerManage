//
// Created by v1ncente_N1A on 2023/2/2.
//
#include "manager.h"

Manager::Manager(int id, string name, int deptid) {
  this->m_Id = id;
  m_Name = name;
  m_DeptId = deptid;
}

//显示个人信息
void Manager::ShowInfo() {
  cout << "职工编号" << m_Id
      << "\t职工姓名" << m_Name
      << "\t岗位" << m_DeptId
      << "\t岗位职责：完成老板交代的任务，并下发给普通员工" << m_Id << endl;
}

//获取岗位名称
string Manager::GetDeptName() {
  return string ("经理");
}