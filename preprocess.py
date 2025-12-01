#-Preprocess.py-###################################################################################################################################
#																		  #
# Preprocesses .txt EBooks from Project Gutenberg to be used as training data. The preprocesser automates the removal of standard PG boilerplate, #
# as well as some parts of the text, such as italic signifiers (_), that may be undesirable.							  #
#																		  #
###################################################################################################################################################
import re
import argparse as ap

parser = ap.ArgumentParser("preprocess.py", description="Preprocesses a Project Gutenberg EBook for use in training LLMs.")
parser.add_argument("file", help="The path to the file to be preprocessed.")
args = parser.parse_args()

remove_line_breaks = re.compile(r"\s+")
find_sentences = re.compile(r"", re.DOTALL)

txt = ""
with open(args.file, encoding="utf-8") as file: 
	txt = file.read()

print("ORIGINAL: ")
print(txt[0:2000])

txt = remove_line_breaks.sub(" ", txt)
# txt = " ".join( find_sentences.findall(txt) )

print("PREPROCESSED: ")
print(txt[0:2000])