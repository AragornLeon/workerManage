//
// Created by v1ncente_N1A on 2023/2/2.
//

#ifndef WORKERMANAGE__WORKER_H_
#define WORKERMANAGE__WORKER_H_

#pragma once
#include<iostream>
#include<string>
using namespace std;

//ְ���ĳ�����
class Worker {
public:
  virtual void ShowInfo() = 0; //��ʾ������Ϣ
  virtual string GetDeptName() = 0; //��ȡ��λ����
public:
  int m_Id; //ְ�����
  string m_Name; //ְ������
  int m_DeptId; //���ű��
};

#endif //WORKERMANAGE__WORKER_H_
