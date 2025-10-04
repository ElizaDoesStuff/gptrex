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

strip_boilerplate = re.compile(r"^.+\*{3} START OF THE PROJECT GUTENBERG EBOOK .+ \*{3}", re.DOTALL)
remove_titles = re.compile(r"^[A-Z \.]{2,}$\n", re.MULTILINE)
extra_line_breaks = re.compile(r"^\n", re.MULTILINE)

txt = ""
with open(args.file, encoding="utf-8") as file: txt = file.read()