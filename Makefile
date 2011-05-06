LATEX=latex
PDFLATEX=pdflatex
DATE=$(shell date +%Y-%m-%d)

dipl = dipl
PARTS = part1.tex part2.tex

$(dipl).pdf:$(dipl).tex $(PARTS)
	$(PDFLATEX) $(dipl).tex

$(dipl).ps:$(dipl).tex
	$(LATEX) $(dipl).tex

pdf: $(dipl).pdf

ps: $(dipl).ps

defalult: pdf
