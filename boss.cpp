//
// Created by v1ncente_N1A on 2023/2/2.
//
#include"boss.h"
//���캯��
Boss::Boss(int id, string name, int deptid) {
  this->m_Id = id;
  this->m_Name = name;
  this->m_DeptId = deptid;
}
//��ʾ������Ϣ
void Boss::ShowInfo() {
  cout << "ְ�����:" << this->m_Id
       << "\tְ������:" << this->m_Name
       << "\t��λ:" << this->GetDeptName()
       << "\t��λְ��:ȫ�ֹ���˾���е�����" << endl;
}
//��ȡ��λ����
string Boss::GetDeptName() {
  return string("�ϰ�");
}
