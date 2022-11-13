Action()
{
	
	lr_start_transaction("UC_3_DeleteCart");

	lr_start_transaction("HomePage");

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_set_user("nikita", 
		lr_unmask("636b675c656ab7c2d9fd3f"), 
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
//		"Url=/css/images/logo.png", ENDITEM, 
//		"Url=/css/images/closeDark.png", ENDITEM, 
//		"Url=/services.properties", ENDITEM, 
//		"Url=/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
//		"Url=/css/fonts/roboto_light_macroman/Roboto-Light-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
//		"Url=/css/images/Special-offer.jpg", ENDITEM, 
//		"Url=/css/images/facebook.png", ENDITEM, 
//		"Url=/css/images/twitter.png", ENDITEM, 
//		"Url=/css/images/GoUp.png", ENDITEM, 
//		"Url=/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
//		"Url=/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
//		"Url=/catalog/fetchImage?image_id=tablets", ENDITEM, 
//		"Url=/catalog/fetchImage?image_id=speakers", ENDITEM, 
//		"Url=/css/images/arrow_right.png", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
//		"Url=/css/images/linkedin.png", ENDITEM, 
//		"Url=/css/images/Banner1.jpg", ENDITEM, 
//		"Url=/catalog/fetchImage?image_id=laptops", ENDITEM, 
//		"Url=/css/images/Banner2.jpg", ENDITEM, 
//		"Url=/catalog/fetchImage?image_id=headphones", ENDITEM, 
//		"Url=/catalog/fetchImage?image_id=mice", ENDITEM, 
//		"Url=/css/images/Banner3.jpg", ENDITEM, 
//		"Url=/css/images/Popular-item1.jpg", ENDITEM, 
//		"Url=/css/images/Popular-item2.jpg", ENDITEM, 
//		"Url=/css/images/Popular-item3.jpg", ENDITEM, 
//		"Url=/css/images/FacebookLogo.png", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
//		"Url=/catalog/fetchImage?image_id=4700", ENDITEM, 
//		"Url=/catalog/fetchImage?image_id=3300", ENDITEM, 
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

	web_url("categories", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_gat=1; DOMAIN=www.advantageonlineshopping.com");

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
	lr_end_transaction("HomePage", LR_AUTO);

	
	login();


	lr_think_time(15);

	lr_start_transaction("GoToCart");
	
	web_reg_save_param("productID",
		"LB/IC=\"productId\":",
		"RB/IC=,",
		"Ord=1",
		LAST);
	web_reg_save_param("quantity",
		"LB/IC=\"quantity\":",
		"RB/IC=,",
		"Ord=1",
		LAST);
	web_reg_save_param("color",
		"LB/IC=\"code\":\"",
		"RB/IC=\",",
		"Ord=1",
		LAST);

	
	web_add_header("Authorization","Basic {AuthBasic}");
	
	web_url("{UserID}_3", 
		"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/{UserID}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_url("shoppingCart.html", 
		"URL=https://www.advantageonlineshopping.com/app/views/shoppingCart.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("GoToCart",LR_AUTO);

	lr_start_transaction("delete");

	web_add_auto_header("Origin", 
		"https://www.advantageonlineshopping.com");

	lr_think_time(17);

	web_add_header("Authorization","Basic {AuthBasic}");
	
	web_reg_find("Fail=Found",
		"Text/IC=\"productId\":{productID}",
		LAST);

	
	web_custom_request("{color}", 
		"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/{UserID}/product/{productID}/color/{color}", 
		"Method=DELETE", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("delete",LR_AUTO);
	
	lr_start_transaction("logout");


	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceAccountLogoutRequest");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(6);

	web_custom_request("AccountLogoutRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/AccountLogoutRequest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLogoutRequest xmlns=\"com.advantage.online.store.accountservice\"><loginUser>{UserID}</loginUser><base64Token>Basic bmlraXRhOk5pa2l0YTE=</base64Token></AccountLogoutRequest></soap:Body></soap:Envelope>", 
		LAST);
	lr_end_transaction("logout", LR_AUTO);
lr_end_transaction("UC_3_DeleteCart", LR_AUTO);


	return 0;
}