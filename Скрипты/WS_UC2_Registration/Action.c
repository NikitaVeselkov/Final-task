Action()
{
	lr_start_transaction("UC_2_Registration");

	
	lr_start_transaction("HomePage");

	
	lr_save_string(lr_eval_string("{generatorData}{generatorData}{generatorData}{generatorData}{generatorData}{generatorData}{generatorData}{generatorData}"), "userLogin");
	
	lr_save_string(lr_eval_string("{generatorData}{generatorData}{generatorData}{generatorData}{generatorData}{generatorData}{generatorData}{generatorData}{genNumber}"), "userPassword");
	
	lr_save_string(lr_eval_string("{generatorData}{generatorData}{generatorData}{generatorData}{generatorData}{generatorData}{generatorData}{generatorData}"), "firstName");
	
	lr_save_string(lr_eval_string("{generatorData}{generatorData}{generatorData}{generatorData}{generatorData}{generatorData}{generatorData}{generatorData}"), "lastName");
	
	lr_save_string(lr_eval_string("{generatorData}{generatorData}{generatorData}{generatorData}{generatorData}{generatorData}{generatorData}{generatorData}"), "stateProvince");
	
	lr_save_string(lr_eval_string("{genNumber}{genNumber}{genNumber}{genNumber}{genNumber}{genNumber}{genNumber}{genNumber}{genNumber}{genNumber}{genNumber}"), "phoneNumber");
	
	lr_save_string(lr_eval_string("{genNumber}{genNumber}{genNumber}{genNumber}{genNumber}{genNumber}"), "zipCode");
	
	lr_save_string(lr_eval_string("{generatorData}{generatorData}{generatorData}{generatorData}{generatorData}{generatorData}{generatorData}{generatorData}{genEmail}"), "email");
	
	lr_save_string(lr_eval_string("{generatorData}{generatorData}{generatorData}{generatorData}{generatorData}{generatorData}{generatorData}{generatorData}"), "address");
	
	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_set_user("dfsdfg", 
		lr_unmask("636a84b9b65887a4b78dc0"), 
		"www.advantageonlineshopping.com:443");

	web_add_cookie("_ga=GA1.2.753485660.1667894186; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_gid=GA1.2.1483889545.1667894186; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%5D%7D; DOMAIN=www.advantageonlineshopping.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

//	web_url("www.advantageonlineshopping.com", 
//		"URL=https://www.advantageonlineshopping.com/", 
//		"TargetFrame=", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer=", 
//		"Snapshot=t1.inf", 
//		"Mode=HTML", 
//		EXTRARES, 
//		"Url=/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
//		"Url=/main.min.js", ENDITEM, 
//		"Url=/css/images/closeDark.png", ENDITEM, 
//		"Url=/services.properties", ENDITEM, 
//		"Url=/css/images/logo.png", ENDITEM, 
//		"Url=/css/fonts/roboto_light_macroman/Roboto-Light-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
//		"Url=/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
//		"Url=/css/images/Special-offer.jpg", ENDITEM, 
//		"Url=/css/images/facebook.png", ENDITEM, 
//		"Url=/css/images/GoUp.png", ENDITEM, 
//		"Url=/css/images/twitter.png", ENDITEM, 
//		"Url=/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
//		"Url=/css/images/Banner1.jpg", ENDITEM, 
//		"Url=/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
//		"Url=/css/images/arrow_right.png", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
//		"Url=/css/images/linkedin.png", ENDITEM, 
//		"Url=/catalog/fetchImage?image_id=speakers", ENDITEM, 
//		"Url=/css/images/Banner2.jpg", ENDITEM, 
//		"Url=/catalog/fetchImage?image_id=tablets", ENDITEM, 
//		"Url=/css/images/Banner3.jpg", ENDITEM, 
//		"Url=/catalog/fetchImage?image_id=laptops", ENDITEM, 
//		"Url=/catalog/fetchImage?image_id=mice", ENDITEM, 
//		"Url=/catalog/fetchImage?image_id=headphones", ENDITEM, 
//		"Url=/css/images/Popular-item1.jpg", ENDITEM, 
//		"Url=/css/images/Popular-item2.jpg", ENDITEM, 
//		"Url=/css/images/Popular-item3.jpg", ENDITEM, 
//		"Url=/css/images/FacebookLogo.png", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
//		"Url=/css/images/Check.png", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
//		"Url=/css/images/Bell.png", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
//		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("ALL", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"https://www.advantageonlineshopping.com");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountConfigurationRequest");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("GetAccountConfigurationRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/GetAccountConfigurationRequest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountConfigurationRequest xmlns=\"com.advantage.online.store.accountservice\"></GetAccountConfigurationRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_add_cookie("_gat=1; DOMAIN=www.advantageonlineshopping.com");

	web_url("categories", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_url("search", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/deals/search?dealOfTheDay=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_url("popularProducts.json", 
		"URL=https://www.advantageonlineshopping.com/app/tempFiles/popularProducts.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home-page.html", 
		"URL=https://www.advantageonlineshopping.com/app/views/home-page.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(28);
	
	lr_end_transaction("HomePage", LR_AUTO);


	lr_start_transaction("GoToCtreateAccount");

	web_url("register-page.html", 
		"URL=https://www.advantageonlineshopping.com/app/user/views/register-page.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetCountriesRequest");

	web_add_auto_header("Origin", 
		"https://www.advantageonlineshopping.com");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_reg_save_param("country",
		"LB/IC=<ns2:name>",
		"RB/IC=</ns2:name>",
		"Ord=All",
		LAST);
	

	web_custom_request("GetCountriesRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/GetCountriesRequest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetCountriesRequest xmlns=\"com.advantage.online.store.accountservice\"></GetCountriesRequest></soap:Body></soap:Envelope>", 
		LAST);
	
	lr_save_string(lr_paramarr_random("country"),"countryRandom");
	
	lr_end_transaction("GoToCtreateAccount", LR_AUTO);
	
	lr_start_transaction("CreateAccount");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceAccountCreateRequest");

	lr_think_time(33);
 
	web_custom_request("AccountCreateRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/AccountCreateRequest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountCreateRequest xmlns=\"com.advantage.online.store.accountservice\"><accountType>USER</accountType><address>{address}</address><allowOffersPromotion>true</allowOffersPromotion><cityName>{address}</cityName><countryId>{countryRandom}</countryId><email>{email}</email>"
		"<firstName>{firstName}</firstName><lastName>{lastName}</lastName><loginName>{userLogin}</loginName><password>{userPassword}</password><phoneNumber>{phoneNumber}</phoneNumber><stateProvince>{stateProvince}</stateProvince><zipcode>{zipCode}</zipcode></AccountCreateRequest></soap:Body></soap:Envelope>", 
		LAST);
		
		

	web_reg_save_param("userID",
		"LB/IC=<ns2:userId>",
		"RB/IC=</ns2:userId>",
		LAST);		
   web_reg_save_param("Authorization",
		"LB/IC=<ns2:t_authorization>",
		"RB/IC=</ns2:t_authorization>",
		LAST);

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceAccountLoginRequest");

	web_custom_request("AccountLoginRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/AccountLoginRequest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLoginRequest xmlns=\"com.advantage.online.store.accountservice\"><email>{email}</email><loginPassword>{userPassword}</loginPassword><loginUser>{userLogin}</loginUser></AccountLoginRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_set_sockets_option("INITIAL_AUTH", "BASIC");

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");
	
	web_add_header("Authorization","Basic {Authorization}");

	web_url("{userID}", 
		"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/{userID}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);
lr_end_transaction("CreateAccount", LR_AUTO);
		
lr_end_transaction("UC_2_Registration", LR_AUTO);


	return 0;
}

	
