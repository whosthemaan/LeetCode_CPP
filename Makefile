.PHONY: clean All

All:
	@echo "----------Building project:[ 1232_Check_if_it_is_a_straight_line - Debug ]----------"
	@cd "1232_Check_if_it_is_a_straight_line" && "$(MAKE)" -f  "1232_Check_if_it_is_a_straight_line.mk"
clean:
	@echo "----------Cleaning project:[ 1232_Check_if_it_is_a_straight_line - Debug ]----------"
	@cd "1232_Check_if_it_is_a_straight_line" && "$(MAKE)" -f  "1232_Check_if_it_is_a_straight_line.mk" clean
