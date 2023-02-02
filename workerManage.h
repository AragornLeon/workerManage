//
// Created by v1ncente_N1A on 2023/2/2.
//

#ifndef UNTITLED3_WORKERMANAGE_WORKERMANAGE_H_
#define UNTITLED3_WORKERMANAGE_WORKERMANAGE_H_

#pragma once//防止头文件重复包含
#include<iostream>
#include<string>
#include"worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"
#include<fstream>
#define FILENAME "test.txt"
using namespace std;//使用标准命名空间

class WorkerManage {
public:
  int m_EmpNum; //记录职工人数
  Worker **m_EmpArray; //职工数组指针
  bool m_FileIsEmpty; //判断文件是否为空标志
  int Get_EmpNum(); //统计文件中的人数
public:
  WorkerManage(); //构造函数
  void Show_Menu(); //展示菜单
  void ExitSystem(); //退出程序

  //添加职工
  void AddEmp();
  void Init_Emp(); //初始化职工
  void Show_Emp(); //显示职工
  int IsExist(int id); //判断职工是否存在
  void Del_Emp(); //删除职工
  void Mod_Emp(); //修改职工
  void Find_Emp(); //查找职工
  void Sort_Emp(); //员工排序


  void SaveFile(); //保存文件
  void Clean_File(); //清空数据
  ~WorkerManage(); //析构函数
};

#endif //UNTITLED3_WORKERMANAGE_WORKERMANAGE_H_
