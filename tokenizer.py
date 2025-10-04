from enum import Enum
import re

class TokenLevels(Enum):
	CHARACTER = 1
	

class Tokenizer:
	tokens = []
	token_level = TokenLevels.CHARACTER
	
	def __init__(self, token_level = TokenLevels.CHARACTER):
		if type(token_level) != TokenLevels: raise Exception("Invalid token level: " + token_level)
		self.token_level = token_level
	
	def build_dictionary(self, text):
		if self.token_level == TokenLevels.CHARACTER:
			self.tokens = text

		# Removes duplicate tokens
		self.tokens = list( set( self.tokens ) )

		# Sort the tokens alphabetically for testing
		self.tokens.sort()
	
	def tokenize(self, string):
		output = []
		if self.token_level == TokenLevels.CHARACTER:
			for char in string:
				if not char in self.tokens: output.append(" ")
				else: output.append(char)

		return output