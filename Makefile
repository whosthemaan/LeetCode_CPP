.PHONY: clean All

All:
	@echo "----------Building project:[ 1_Two_Sum - Debug ]----------"
	@cd "1_Two_Sum" && "$(MAKE)" -f  "1_Two_Sum.mk"
clean:
	@echo "----------Cleaning project:[ 1_Two_Sum - Debug ]----------"
	@cd "1_Two_Sum" && "$(MAKE)" -f  "1_Two_Sum.mk" clean
