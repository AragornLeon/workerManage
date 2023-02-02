//
// Created by v1ncente_N1A on 2023/2/2.
//

#ifndef WORKERMANAGE__BOSS_H_
#define WORKERMANAGE__BOSS_H_

#pragma once
#include<iostream>
#include"worker.h"
#include<string>
using namespace std;
//老板类
class Boss : public Worker {
public:
  Boss(int id, string name, int deptid);//构造函数
  virtual void ShowInfo();//显示个人信息
  virtual string GetDeptName();//获取岗位名称
};

#endif //WORKERMANAGE__BOSS_H_
