from tokenizer import Tokenizer, TokenLevels

tokenizer = Tokenizer(TokenLevels.CHARACTER)

with open("data.txt", encoding="utf-8") as file: tokenizer.build_dictionary( file.read() )

print(tokenizer.tokens)

print( tokenizer.tokenize("Hello, World!") )