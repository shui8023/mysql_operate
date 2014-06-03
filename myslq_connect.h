/*
 * =====================================================================================
 *
 *       Filename:  myslq_connect.h
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

#include <mysql/mysql.h>

class my_mysql{
	public :
		my_mysql(); 		 				//初始化数据库
		my_mysql_connect(const char * connect_host,
					const char *mysql_name,
					const char *mysql_passwd,
					const char *mysql_table,)
		~my_mysql(); 						//销毁数据库的连接
	private :
		MYSQL my_mysql_t;
}:
