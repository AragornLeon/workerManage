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
//�ϰ���
class Boss : public Worker {
public:
  Boss(int id, string name, int deptid);//���캯��
  virtual void ShowInfo();//��ʾ������Ϣ
  virtual string GetDeptName();//��ȡ��λ����
};

#endif //WORKERMANAGE__BOSS_H_
