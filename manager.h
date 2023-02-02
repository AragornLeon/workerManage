//
// Created by v1ncente_N1A on 2023/2/2.
//

#ifndef WORKERMANAGE__MANAGER_H_
#define WORKERMANAGE__MANAGER_H_

#pragma once
#include<iostream>
#include"worker.h"
#include<string>
using namespace std;
//经理类
class Manager : public Worker {
public:
  Manager(int id, string name, int deptid);//构造函数
  virtual void ShowInfo();//显示个人信息
  virtual string GetDeptName();//获取岗位名称
};

#endif //WORKERMANAGE__MANAGER_H_
