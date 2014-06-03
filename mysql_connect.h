/*
 * =====================================================================================
 *
 *       Filename:  mysql_connect.h
 *
 *    Description:  连接mysql的封装函数的头文件
 *
 *        Version:  1.0
 *        Created:  2014年06月03日 12时11分02秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Shui(dubingyang), dubingyangxiyou@gmail.com
 *        Company:  Class 1201 of software engineering
 *
 * =====================================================================================
 */

#ifndef MYSQL_CONNECT_H
#define MYSQL_CONNECT_H

#include <mysql/mysql.h>

class my_mysql{
	public :
		my_mysql(); 
		void my_mysql_connect(const char * connect_host,
					const char *mysql_name,
					const char *mysql_passwd,
					const char *mysql_table);
		void my_mysql_work(const char * commect);
		~my_mysql(); 

	
	private :
		my_mysql(const my_mysql &);
		my_mysql & operator =(const my_mysql &);

	private :
		MYSQL my_mysql_t;
};

#endif //MYSQL_CONNECT_H
