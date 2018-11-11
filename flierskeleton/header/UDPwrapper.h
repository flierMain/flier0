///*
// * UDPwrapper.h
// *
// *  Created on: 6 ����. 2018 �.
// *      Author: user0
// */
//
//  #pragma comment ( lib, "ws2_32.lib" )
//  #include <stdio.h>
//  #include <string.h>
//  #include <winsock2.h>
//  #include <windows.h>
//  #include <iostream>
//
//#ifndef UDPWRAPPER_H_
//#define UDPWRAPPER_H_
//
//class UDPwrapper {
//public:
//	UDPwrapper();
//	virtual ~UDPwrapper();
//};
//
//int main()
// {
//   char SERVERADDR[4];
//   char buff[10*1014];
//
//   printf("UDP Client Started\n");
//
//	// ������������� WinSock
//	WORD wVersionRequested = MAKEWORD (2,2);
//	WSADATA wsaData;
//   int err = WSAStartup(wVersionRequested, &wsaData);
//	if (err !=0)
//   {
//     printf("WSAStartup error: %d\n",WSAGetLastError());
//   }
//
//
//   // �������� � �������� ������
//   SOCKET my_sock=socket(AF_INET, SOCK_DGRAM, 0);
//   if (my_sock==INVALID_SOCKET)
//   {
//     printf("socket() error: %d\n",WSAGetLastError());
//     WSACleanup();
//   }
//
//	printf("Enter Server IP: ");
//	gets(SERVERADDR);
//
//   // ��� 3 - ����� ��������� � ��������
//   HOSTENT *hostent;
//   sockaddr_in dest_addr;
//
//   dest_addr.sin_family=AF_INET;
//   dest_addr.sin_port=htons(5150);
//
//
//   // ����������� IP-������ ����
//   if (inet_addr(SERVERADDR))
//     dest_addr.sin_addr.s_addr=inet_addr(SERVERADDR);
//   else
//     if (hostent=gethostbyname(SERVERADDR))
//       dest_addr.sin_addr.s_addr=((unsigned long **)
//             hostent->h_addr_list)[0][0];
//   else
//     {
//       printf("Unknown host: %d\n",WSAGetLastError());
//       closesocket(my_sock);
//       WSACleanup();
//       return -1;
//     }
//
//   while(1)
//   {
//     // ������ ��������� � ����������
//     printf("C=>S:");fgets(&buff[0],sizeof(buff)-1,stdin);
//     if (!strcmp(&buff[0],"quit\n")) break;
//
//     // �������� ��������� �� ������
//     sendto(my_sock,&buff[0],strlen(&buff[0]),0, (sockaddr *) &dest_addr,sizeof(dest_addr));
//
//     // ����� ��������� � �������
//     sockaddr_in server_addr;
//     int server_addr_size=sizeof(server_addr);
//
//     int n=recvfrom(my_sock,&buff[0],sizeof(buff)-1,0, (sockaddr *) &server_addr, &server_addr_size);
//
//     if (n==SOCKET_ERROR)
//     {
//       printf("recvfrom() error:"\
//         "%d\n",WSAGetLastError());
//       closesocket(my_sock);
//       WSACleanup();
//       return -1;
//     }
//
//     buff[n]=0;
//
//     // ����� ��������� � ������� ��������� �� �����
//     printf("S=>C:%s",&buff[0]);
//   }
//
//   // ��� ��������� - �����
//   closesocket(my_sock);
//   WSACleanup();
//
//   return 0;
// }
//
//#endif /* UDPWRAPPER_H_ */
