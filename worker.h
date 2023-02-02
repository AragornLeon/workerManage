//
// Created by v1ncente_N1A on 2023/2/2.
//

#ifndef WORKERMANAGE__WORKER_H_
#define WORKERMANAGE__WORKER_H_

#pragma once
#include<iostream>
#include<string>
using namespace std;

//职工的抽象类
class Worker {
public:
  virtual void ShowInfo() = 0; //显示个人信息
  virtual string GetDeptName() = 0; //获取岗位名称
public:
  int m_Id; //职工编号
  string m_Name; //职工姓名
  int m_DeptId; //部门编号
};

#endif //WORKERMANAGE__WORKER_H_
