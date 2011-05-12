LATEX=latex
PDFLATEX=pdflatex
DATE=$(shell date +%Y-%m-%d)

pres = pres
PARTS = pres.tex


$(pres).pdf:$(pres).tex $(PARTS)
	$(PDFLATEX) $(pres).tex

$(pres).ps:$(pres).tex
	$(LATEX) $(pres).tex

pdf: $(pres).pdf

ps: $(pres).ps

defalult: pdf
