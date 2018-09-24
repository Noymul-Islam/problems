<?xml version="1.0" encoding="UTF-8"?>
<web-app version="3.1" xmlns="http://xmlns.jcp.org/xml/ns/javaee" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://xmlns.jcp.org/xml/ns/javaee http://xmlns.jcp.org/xml/ns/javaee/web-app_3_1.xsd">
    <servlet>
        <servlet-name>LoginServlet</servlet-name>
        <servlet-class>MyPack.LoginServlet</servlet-class>
    </servlet>
    <servlet>
        <servlet-name>CreateAccountServlet</servlet-name>
        <servlet-class>MyPack.CreateAccountServlet</servlet-class>
    </servlet>
    <servlet>
        <servlet-name>ReceiveReqServlet</servlet-name>
        <servlet-class>MyPack.ReceiveReqServlet</servlet-class>
    </servlet>
    <servlet>
        <servlet-name>FinalizeUserOrderServlet</servlet-name>
        <servlet-class>MyPack.FinalizeUserOrderServlet</servlet-class>
    </servlet>
    <servlet>
        <servlet-name>LogOutServlet</servlet-name>
        <servlet-class>MyPack.LogOutServlet</servlet-class>
    </servlet>
    <servlet-mapping>
        <servlet-name>LoginServlet</servlet-name>
        <url-pattern>/LoginServlet</url-pattern>
    </servlet-mapping>
    <servlet-mapping>
        <servlet-name>CreateAccountServlet</servlet-name>
        <url-pattern>/CreateAccountServlet</url-pattern>
    </servlet-mapping>
    <servlet-mapping>
        <servlet-name>ReceiveReqServlet</servlet-name>
        <url-pattern>/ReceiveReqServlet</url-pattern>
    </servlet-mapping>
    <servlet-mapping>
        <servlet-name>FinalizeUserOrderServlet</servlet-name>
        <url-pattern>/FinalizeUserOrderServlet</url-pattern>
    </servlet-mapping>
    <servlet-mapping>
        <servlet-name>LogOutServlet</servlet-name>
        <url-pattern>/LogOutServlet</url-pattern>
    </servlet-mapping>
    <session-config>
        <session-timeout>
            30
        </session-timeout>
    </session-config>
</web-app>
