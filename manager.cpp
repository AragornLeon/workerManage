//
// Created by v1ncente_N1A on 2023/2/2.
//
#include "manager.h"

Manager::Manager(int id, string name, int deptid) {
  this->m_Id = id;
  m_Name = name;
  m_DeptId = deptid;
}

//��ʾ������Ϣ
void Manager::ShowInfo() {
  cout << "ְ�����" << m_Id
      << "\tְ������" << m_Name
      << "\t��λ" << m_DeptId
      << "\t��λְ������ϰ彻�������񣬲��·�����ͨԱ��" << m_Id << endl;
}

//��ȡ��λ����
string Manager::GetDeptName() {
  return string ("����");
}