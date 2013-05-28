LATEX=latex
PDFLATEX=pdflatex
DATE=$(shell date +%Y-%m-%d)

course4 = course4
PARTS = part.tex part1.tex part2.tex part3.tex part4.tex part5.tex part6.tex finalresult.tex selinux.tex

$(course4).pdf:$(course4).tex $(PARTS)
	$(PDFLATEX) $(course4).tex

$(course4).ps:$(course4).tex
	$(LATEX) $(course4).tex

pdf: $(course4).pdf

ps: $(course4).ps

defalult: pdf
