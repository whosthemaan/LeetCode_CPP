.PHONY: clean All

All:
	@echo "----------Building project:[ 1779_Find_Nearest_Point_That_Has_the_Same_X_or_Y_Coordinate - Debug ]----------"
	@cd "1779_Find_Nearest_Point_That_Has_the_Same_X_or_Y_Coordinate" && "$(MAKE)" -f  "1779_Find_Nearest_Point_That_Has_the_Same_X_or_Y_Coordinate.mk"
clean:
	@echo "----------Cleaning project:[ 1779_Find_Nearest_Point_That_Has_the_Same_X_or_Y_Coordinate - Debug ]----------"
	@cd "1779_Find_Nearest_Point_That_Has_the_Same_X_or_Y_Coordinate" && "$(MAKE)" -f  "1779_Find_Nearest_Point_That_Has_the_Same_X_or_Y_Coordinate.mk" clean
