package Database

import "fmt"
import "gorm.io/gorm"
import "gorm.io/driver/postgres"

import "App/model"

var db *gorm.DB

func DatabaseConnection() (*gorm.DB, error) {
	sqlInfo := fmt.Sprintf("host=localhost port=5432 dbname=mydatabase user=hpcap password=hpcap sslmode=disable")
	db, err := gorm.Open(postgres.Open(sqlInfo), &gorm.Config{})
	if err != nil {
		return nil, err
	}
	db = database
	return db, nil

fmt.Println("Database connected")
	db.AutoMigrate(model.student{})
    return db, nil
}