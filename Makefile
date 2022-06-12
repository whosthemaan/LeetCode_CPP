.PHONY: clean All

All:
	@echo "----------Building project:[ 976_Largest_Perimeter_Triangle - Debug ]----------"
	@cd "976_Largest_Perimeter_Triangle" && "$(MAKE)" -f  "976_Largest_Perimeter_Triangle.mk"
clean:
	@echo "----------Cleaning project:[ 976_Largest_Perimeter_Triangle - Debug ]----------"
	@cd "976_Largest_Perimeter_Triangle" && "$(MAKE)" -f  "976_Largest_Perimeter_Triangle.mk" clean
