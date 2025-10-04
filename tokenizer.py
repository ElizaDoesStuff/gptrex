from enum import Enum

class TokenLevels(Enum):
	CHARACTER = 1
	WORD = 2
	

class Tokenizer:
	tokens = []
	token_level = TokenLevels.CHARACTER
	
	def __init__(self, token_level = TokenLevels.CHARACTER):
		self.token_level = token_level
	
	def build_dictionary(self, text):
		if self.token_level == TokenLevels.CHARACTER:
			tokens = text.split()
	
	def tokenize(self, string):
		pass