//
// Created by v1ncente_N1A on 2023/2/2.
//

#ifndef UNTITLED3_WORKERMANAGE_WORKERMANAGE_H_
#define UNTITLED3_WORKERMANAGE_WORKERMANAGE_H_

#pragma once//��ֹͷ�ļ��ظ�����
#include<iostream>
#include<string>
#include"worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"
#include<fstream>
#define FILENAME "test.txt"
using namespace std;//ʹ�ñ�׼�����ռ�

class WorkerManage {
public:
  int m_EmpNum; //��¼ְ������
  Worker **m_EmpArray; //ְ������ָ��
  bool m_FileIsEmpty; //�ж��ļ��Ƿ�Ϊ�ձ�־
  int Get_EmpNum(); //ͳ���ļ��е�����
public:
  WorkerManage(); //���캯��
  void Show_Menu(); //չʾ�˵�
  void ExitSystem(); //�˳�����

  //���ְ��
  void AddEmp();
  void Init_Emp(); //��ʼ��ְ��
  void Show_Emp(); //��ʾְ��
  int IsExist(int id); //�ж�ְ���Ƿ����
  void Del_Emp(); //ɾ��ְ��
  void Mod_Emp(); //�޸�ְ��
  void Find_Emp(); //����ְ��
  void Sort_Emp(); //Ա������


  void SaveFile(); //�����ļ�
  void Clean_File(); //�������
  ~WorkerManage(); //��������
};

#endif //UNTITLED3_WORKERMANAGE_WORKERMANAGE_H_
