.PHONY: clean All

All:
	@echo "----------Building project:[ Decimal_To_Binary - Debug ]----------"
	@cd "Decimal_To_Binary" && "$(MAKE)" -f  "Decimal_To_Binary.mk"
clean:
	@echo "----------Cleaning project:[ Decimal_To_Binary - Debug ]----------"
	@cd "Decimal_To_Binary" && "$(MAKE)" -f  "Decimal_To_Binary.mk" clean
