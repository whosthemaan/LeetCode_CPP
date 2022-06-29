.PHONY: clean All

All:
	@echo "----------Building project:[ Duplicate_zeroes - Debug ]----------"
	@cd "Duplicate_zeroes" && "$(MAKE)" -f  "Duplicate_zeroes.mk"
clean:
	@echo "----------Cleaning project:[ Duplicate_zeroes - Debug ]----------"
	@cd "Duplicate_zeroes" && "$(MAKE)" -f  "Duplicate_zeroes.mk" clean
