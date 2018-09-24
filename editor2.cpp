<?xml version="1.0" encoding="UTF-8"?>
<web-app version="3.1" xmlns="http://xmlns.jcp.org/xml/ns/javaee" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://xmlns.jcp.org/xml/ns/javaee http://xmlns.jcp.org/xml/ns/javaee/web-app_3_1.xsd">
    <servlet>
        <servlet-name>managerSaveCustomerChange</servlet-name>
        <servlet-class>managerSaveCustomerChange</servlet-class>
    </servlet>
    <servlet-mapping>
        <servlet-name>managerSaveCustomerChange</servlet-name>
        <url-pattern>/managerSaveCustomerChange</url-pattern>
    </servlet-mapping>
    <session-config>
        <session-timeout>
            30
        </session-timeout>
    </session-config>
</web-app>

