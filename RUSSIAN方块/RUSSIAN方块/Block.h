#pragma once
#include<graphics.h>//��װeasyxͼ�ο�
#include<vector>
using namespace std;
struct point {
	int row;
	int col;
};
class Block
{
public: Block();
	  void rerverse();//��ת
	  void drop();//�½�
	  void moveleftright(int offset);//�����ƶ�
	  void draw(int leftmargin, int topmargin);//��Ҳ���ˡ�����������������չʾ���飬Ԥ���͵�һ����
	  static IMAGE** getimages();//I  forget and I would rember
	  void solidify( vector<vector<int>> &map);//�̻�
	  Block& operator=(const Block& other);//��д�����
	  
	  bool blockmap(const vector<vector<int>> &map);
	  //point* getsmallblocks();
	  int getblocktype();

private: 
	   int blocktype;//���������
	   point smallblocks[4];//4��С����ֱ��ڵڼ��еڼ���
	   IMAGE* img;


	   static IMAGE* imgs[7];//���ص�������IMAGE*
	   static int size;
};

