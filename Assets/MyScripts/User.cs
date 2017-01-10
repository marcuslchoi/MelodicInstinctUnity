using System.Collections;
using System.Collections.Generic;
using System;
using Unity3dAzure.AppServices;

[CLSCompliant(false)]
public class User : DataModel 
{

	public string UserId {get;set;}

	//public List<string> FriendIds {get;set;}

	public string FirstName{ get; set;}
	public string LastName{ get; set;}

}
