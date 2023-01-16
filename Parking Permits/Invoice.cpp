#include "Invoice.h"
#include <string>

void Invoice::setPrice(double p)
{
	if (permit.getAnnual() == "annual") // if permit.getAnnual is equal to annual 
	{
		price = 180;// sets the price to $180
		p = price;
	}
	if (permit.getSemster() == "semester") // Same logic from above
	{
		price = 90;
		p = price;
	}
	if (permit.getCommuter() == "commuter") 
	{
		price = 75;
		p = price;
	}
	if (permit.getOneDay() == "one day") 
	{
		price = 10;
		p = price;
	}
	if (permit.getParkNRide() == "park n ride") 
	{
		price = 50;
		p = price;
	}

}

void Invoice::setDiscount(double d) 
{
	if (permit.getAnnual() == "annual") // Same logic from above except is initilizes the discount
	{
		discount = 50;
	}
	if (permit.getSemster() == "semester")
	{
		discount = 25;
	}
	if (permit.getCommuter() == "commuter")
	{
		discount = 10;
	}
	if (permit.getOneDay() == "one day")
	{
		discount = 0;
	}
	if (permit.getParkNRide() == "park n ride") 
	{
		discount = 10;
	}
}

void Invoice::setServiceFee(double f) 
{
	if (permit.getAnnual() == "annual")
	{
		serviceFee = 30;
	}
	if (permit.getSemster() == "semester")
	{
		serviceFee = 15;
	}
	if (permit.getCommuter() == "commuter")
	{
		serviceFee = 10;
	}
	if (permit.getOneDay() == "one day")
	{
		serviceFee = 5;
	}
	if (permit.getParkNRide() == "park n ride")
	{
		serviceFee = 5;
	}
}

void Invoice::setTotalPrice(double t) 
{
	totalPrice = (price - discount) + serviceFee; // calculates the total price of the permit

	t = totalPrice;
}

// OUTPUT of invoice functions 
string Invoice::ShowInvoice(Employee, Car, permitType) // passes in classes to get data
{
	setPrice(price); // sets the price
	setDiscount(discount); // sets the discount
	setTotalPrice(totalPrice); // sets the total

	// These return functions output the users data that they entered
	return "Name: " + employee.getName() + "\nAddress: " + employee.getAddress() + "\nEmployee ID: " + to_string(employee.getEmployeeID())
		+ "\nPhone Number: " + employee.getPhoneNumber() + "\nDrivers License Number: " + employee.getDriversLicenseNumber() +
		"\nSocial Security: " + to_string(employee.getsocialSecurity()) + "\nMake: " + car.getMake() + "\nModel: " + car.getModel() +
		"\nLicense Plate: " + car.getPlate() + "\nColor: " + car.getColor() + "\nYear: " + to_string(car.getYear()) + "\nPermit Cost: "
		+ to_string(totalPrice);
}
string Invoice::ShowInvoice(Employee, LowEmissionVehicle, permitType) // Same logic as above (see comments)
{
	setPrice(price);
	setDiscount(discount);
	setTotalPrice(totalPrice);

	return "Name: " + employee.getName() + "\nAddress: " + employee.getAddress() + "\nEmployee ID: " + to_string(employee.getEmployeeID())
		+ "\nPhone Number: " + employee.getPhoneNumber() + "\nDrivers License Number: " + employee.getDriversLicenseNumber() +
		"\nSocial Security: " + to_string(employee.getsocialSecurity()) + "\nMake: " + lowEmissionVehicle.getMake() + "\nModel: " + lowEmissionVehicle.getModel() +
		"\nLicense Plate: " + lowEmissionVehicle.getPlate() + "\nColor: " + lowEmissionVehicle.getColor() + "\nYear: " + to_string(lowEmissionVehicle.getYear()) + "\nPermit Cost: "
		+ to_string(totalPrice);
}
string Invoice::ShowInvoice(Employee, Motorcycle, permitType)
{
	setPrice(price);
	setDiscount(discount);
	setTotalPrice(totalPrice);

	return "Name: " + employee.getName() + "\nAddress: " + employee.getAddress() + "\nEmployee ID: " + to_string(employee.getEmployeeID())
		+ "\nPhone Number: " + employee.getPhoneNumber() + "\nDrivers License Number: " + employee.getDriversLicenseNumber() +
		"\nSocial Security: " + to_string(employee.getsocialSecurity()) + "\nMake: " + motorcycle.getMake() + "\nModel: " + motorcycle.getModel() +
		"\nLicense Plate: " + motorcycle.getPlate() + "\nColor: " + motorcycle.getColor() + "\nYear: " + to_string(motorcycle.getYear()) + "\nPermit Cost: "
		+ to_string(totalPrice);

}
string Invoice::ShowInvoice(Employee, Moped, permitType)
{
	setPrice(price);
	setDiscount(discount);
	setTotalPrice(totalPrice);

	return "Name: " + employee.getName() + "\nAddress: " + employee.getAddress() + "\nEmployee ID: " + to_string(employee.getEmployeeID())
		+ "\nPhone Number: " + employee.getPhoneNumber() + "\nDrivers License Number: " + employee.getDriversLicenseNumber() +
		"\nSocial Security: " + to_string(employee.getsocialSecurity()) + "\nMake: " + motorcycle.getMake() + "\nModel: " + motorcycle.getModel() +
		"\nLicense Plate: " + motorcycle.getPlate() + "\nColor: " + motorcycle.getColor() + "\nYear: " + to_string(motorcycle.getYear()) + "\nPermit Cost: "
		+ to_string(totalPrice);
}
string Invoice::ShowInvoice(Student, Car, permitType)
{
	setPrice(price);
	setDiscount(discount);
	setTotalPrice(totalPrice);

	return "Name: " + student.getName() + "\nAddress: " + student.getAddress() + "\nCUID: " + to_string(student.getCUID())
		+ "\nPhone Number: " + student.getPhoneNumber() + "\nDrivers License Number: " + student.getDriversLicenseNumber() +
		"\nEmail: " + student.getEmail() + "\nMake: " + car.getMake() + "\nModel: " + car.getModel() +
		"\nLicense Plate: " + car.getPlate() + "\nColor: " + car.getColor() + "\nYear: " + to_string(car.getYear()) + "\nPermit Cost: "
		+ to_string(totalPrice);
}
string Invoice::ShowInvoice(Student, LowEmissionVehicle, permitType)
{
	setPrice(price);
	setDiscount(discount);
	setTotalPrice(totalPrice);

	return "Name: " + student.getName() + "\nAddress: " + student.getAddress() + "\nCUID: " + to_string(student.getCUID())
		+ "\nPhone Number: " + student.getPhoneNumber() + "\nDrivers License Number: " + student.getDriversLicenseNumber() +
		"\nEmail: " + student.getEmail() + "\nMake: " + lowEmissionVehicle.getMake() + "\nModel: " + lowEmissionVehicle.getModel() +
		"\nLicense Plate: " + lowEmissionVehicle.getPlate() + "\nColor: " + lowEmissionVehicle.getColor() + "\nYear: " + to_string(lowEmissionVehicle.getYear()) + "\nPermit Cost: "
		+ to_string(totalPrice);
}
string Invoice::ShowInvoice(Student, Motorcycle, permitType)
{
	setPrice(price);
	setDiscount(discount);
	setTotalPrice(totalPrice);

	return "Name: " + student.getName() + "\nAddress: " + student.getAddress() + "\nCUID: " + to_string(student.getCUID())
		+ "\nPhone Number: " + student.getPhoneNumber() + "\nDrivers License Number: " + student.getDriversLicenseNumber() +
		"\nEmail: " + student.getEmail() + "\nMake: " + motorcycle.getMake() + "\nModel: " + motorcycle.getModel() +
		"\nLicense Plate: " + motorcycle.getPlate() + "\nColor: " + motorcycle.getColor() + "\nYear: " + to_string(motorcycle.getYear()) + "\nPermit Cost: "
		+ to_string(totalPrice);
}
string Invoice::ShowInvoice(Student, Moped, permitType)
{
	setPrice(price);
	setDiscount(discount);
	setTotalPrice(totalPrice);

	return "Name: " + student.getName() + "\nAddress: " + student.getAddress() + "\nCUID: " + to_string(student.getCUID())
		+ "\nPhone Number: " + student.getPhoneNumber() + "\nDrivers License Number: " + student.getDriversLicenseNumber() +
		"\nEmail: " + student.getEmail() + "\nMake: " + moped.getMake() + "\nModel: " + moped.getModel() +
		"\nLicense Plate: " + moped.getPlate() + "\nColor: " + moped.getColor() + "\nYear: " + to_string(moped.getYear()) + "\nPermit Cost: "
		+ to_string(totalPrice);
}
string Invoice::ShowInvoice(Visitor, Car, permitType)
{
	setPrice(price);
	setDiscount(discount);
	setTotalPrice(totalPrice);

	return "Name: " + visitor.getName() + "\nAddress: " + visitor.getAddress() + "\nPhone Number: " + visitor.getPhoneNumber() +
		"\nDrivers License Number: " + visitor.getDriversLicenseNumber() + "\nEmail: " + visitor.getEmail() + "\nMake: " + car.getMake() +
		"\nModel: " + car.getModel() + "\nLicense Plate: " + car.getPlate() + "\nColor: " + car.getColor() + "\nYear: " + to_string(car.getYear()) + "\nPermit Cost: "
		+ to_string(totalPrice);
}
string Invoice::ShowInvoice(Visitor, LowEmissionVehicle, permitType)
{
	setPrice(price);
	setDiscount(discount);
	setTotalPrice(totalPrice);

	return "Name: " + visitor.getName() + "\nAddress: " + visitor.getAddress() + "\nPhone Number: " + visitor.getPhoneNumber() +
		"\nDrivers License Number: " + visitor.getDriversLicenseNumber() + "\nEmail: " + visitor.getEmail() + "\nMake: " + lowEmissionVehicle.getMake() +
		"\nModel: " + lowEmissionVehicle.getModel() + "\nLicense Plate: " + lowEmissionVehicle.getPlate() + "\nColor: " + lowEmissionVehicle.getColor() + "\nYear: "
		+ to_string(lowEmissionVehicle.getYear()) + "\nPermit Cost: " + to_string(totalPrice);
}
string Invoice::ShowInvoice(Visitor, Motorcycle, permitType)
{
	setPrice(price);
	setDiscount(discount);
	setTotalPrice(totalPrice);

	return "Name: " + visitor.getName() + "\nAddress: " + visitor.getAddress() + "\nPhone Number: " + visitor.getPhoneNumber() +
		"\nDrivers License Number: " + visitor.getDriversLicenseNumber() + "\nEmail: " + visitor.getEmail() + "\nMake: " + motorcycle.getMake() +
		"\nModel: " + motorcycle.getModel() + "\nLicense Plate: " + motorcycle.getPlate() + "\nColor: " + motorcycle.getColor() + "\nYear: "
		+ to_string(motorcycle.getYear()) + "\nPermit Cost: " + to_string(totalPrice);
}
string Invoice::ShowInvoice(Visitor, Moped, permitType)
{
	setPrice(price);
	setDiscount(discount);
	setTotalPrice(totalPrice);

	return "Name: " + visitor.getName() + "\nAddress: " + visitor.getAddress() + "\nPhone Number: " + visitor.getPhoneNumber() +
		"\nDrivers License Number: " + visitor.getDriversLicenseNumber() + "\nEmail: " + visitor.getEmail() + "\nMake: " + moped.getMake() +
		"\nModel: " + moped.getModel() + "\nLicense Plate: " + moped.getPlate() + "\nColor: " + moped.getColor() + "\nYear: "
		+ to_string(moped.getYear()) + "\nPermit Cost: " + to_string(totalPrice);
}
string Invoice::ShowInvoice(Vendor, Car, permitType)
{
	setPrice(price);
	setDiscount(discount);
	setTotalPrice(totalPrice);

	return "Name: " + vendor.getName() + "\nEmployee ID: " + to_string(vendor.getEmployeeID()) + "\nEmail: " + vendor.getEmail()
		+ "\nPhone Number: " + vendor.getPhoneNumber() + "\nCompany name: " + vendor.getCompanyName() +
		"\nSocial Security: " + to_string(employee.getsocialSecurity()) + "\nMake: " + car.getMake() + "\nModel: " + car.getModel() +
		"\nLicense Plate: " + car.getPlate() + "\nColor: " + car.getColor() + "\nYear: " + to_string(car.getYear()) + "\nPermit Cost: "
		+ to_string(totalPrice);
}
string Invoice::ShowInvoice(Vendor, LowEmissionVehicle, permitType)
{
	setPrice(price);
	setDiscount(discount);
	setTotalPrice(totalPrice);

	return "Name: " + vendor.getName() + "\nEmployee ID: " + to_string(vendor.getEmployeeID()) + "\nEmail: " + vendor.getEmail()
		+ "\nPhone Number: " + vendor.getPhoneNumber() + "\nCompany name: " + vendor.getCompanyName() +
		"\nSocial Security: " + to_string(employee.getsocialSecurity()) + "\nMake: " + lowEmissionVehicle.getMake() + "\nModel: " + lowEmissionVehicle.getModel() +
		"\nLicense Plate: " + lowEmissionVehicle.getPlate() + "\nColor: " + lowEmissionVehicle.getColor() + "\nYear: " + to_string(lowEmissionVehicle.getYear()) + "\nPermit Cost: "
		+ to_string(totalPrice);
}
string Invoice::ShowInvoice(Vendor, Motorcycle, permitType)
{
	setPrice(price);
	setDiscount(discount);
	setTotalPrice(totalPrice);

	return "Name: " + vendor.getName() + "\nEmployee ID: " + to_string(vendor.getEmployeeID()) + "\nEmail: " + vendor.getEmail()
		+ "\nPhone Number: " + vendor.getPhoneNumber() + "\nCompany name: " + vendor.getCompanyName() +
		"\nSocial Security: " + to_string(employee.getsocialSecurity()) + "\nMake: " + motorcycle.getMake() + "\nModel: " + motorcycle.getModel() +
		"\nLicense Plate: " + motorcycle.getPlate() + "\nColor: " + motorcycle.getColor() + "\nYear: " + to_string(motorcycle.getYear()) + "\nPermit Cost: "
		+ to_string(totalPrice);
}
string Invoice::ShowInvoice(Vendor, Moped, permitType)
{
	setPrice(price);
	setDiscount(discount);
	setTotalPrice(totalPrice);

	return "Name: " + vendor.getName() + "\nEmployee ID: " + to_string(vendor.getEmployeeID()) + "\nEmail: " + vendor.getEmail()
		+ "\nPhone Number: " + vendor.getPhoneNumber() + "\nCompany name: " + vendor.getCompanyName() +
		"\nSocial Security: " + to_string(employee.getsocialSecurity()) + "\nMake: " + moped.getMake() + "\nModel: " + moped.getModel() +
		"\nLicense Plate: " + moped.getPlate() + "\nColor: " + moped.getColor() + "\nYear: " + to_string(moped.getYear()) + "\nPermit Cost: "
		+ to_string(totalPrice);
}