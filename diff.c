	FILE *file;
static void emit_line_0(FILE *file, const char *set, const char *reset,
static void emit_line(FILE *file, const char *set, const char *reset,
	emit_line_0(file, set, reset, line[0], line+1, len-1);
		emit_line_0(ecbdata->file, set, reset, '+', line, len);
		emit_line_0(ecbdata->file, ws, reset, '+', line, len);
		emit_line_0(ecbdata->file, set, reset, '+', "", 0);
			      ecbdata->file, set, reset, ws);
		emit_line(ecbdata->file, plain, reset, line, len);
	emit_line(ecbdata->file, frag, reset, line, ep - line);
	if (ep != cp)
		emit_line(ecbdata->file, plain, reset, cp, ep - cp);
	if (ep < line + len)
		emit_line(ecbdata->file, func, reset, ep, line + len - ep);
			emit_line_0(ecb->file, old, reset, '-',
		emit_line_0(ecb->file, plain, reset, '\\',
	ecbdata.file = o->file;
		"%s--- %s%s%s\n%s+++ %s%s%s\n%s@@ -",
		metainfo, a_name.buf, name_a_tab, reset,
		metainfo, b_name.buf, name_b_tab, reset, fraginfo);
	FILE *file;
					  size_t count, const char *buf)
	if (diff_words->current_plus != plus_begin)
		fn_out_diff_words_write_helper(diff_words->file,
				diff_words->current_plus);
	if (minus_begin != minus_end)
		fn_out_diff_words_write_helper(diff_words->file,
				minus_end - minus_begin, minus_begin);
	if (plus_begin != plus_end)
		fn_out_diff_words_write_helper(diff_words->file,
				plus_end - plus_begin, plus_begin);
		fn_out_diff_words_write_helper(diff_words->file,
			diff_words->minus.text.size, diff_words->minus.text.ptr);
			diff_words->plus.text.size)
		fn_out_diff_words_write_helper(diff_words->file,
			- diff_words->current_plus, diff_words->current_plus);
		fprintf(ecbdata->file, "%s", ecbdata->header->buf);
		fprintf(ecbdata->file, "%s--- %s%s%s\n",
			meta, ecbdata->label_path[0], reset, name_a_tab);
		fprintf(ecbdata->file, "%s+++ %s%s%s\n",
			meta, ecbdata->label_path[1], reset, name_b_tab);
			putc('\n', ecbdata->file);
		emit_line(ecbdata->file, reset, reset, line, len);
			fputs("~\n", ecbdata->file);
			emit_line(ecbdata->file, plain, reset, line, len);
			fputs("~\n", ecbdata->file);
			emit_line(ecbdata->file, plain, reset, line+1, len-1);
		emit_line(ecbdata->file, color, reset, line, len);
static long gather_dirstat(FILE *file, struct dirstat_dir *dir, unsigned long changed, const char *base, int baselen)
			this = gather_dirstat(file, dir, changed, f->name, newbaselen);
				fprintf(file, "%4d.%01d%% %.*s\n", percent, permille % 10, baselen, base);
	gather_dirstat(options->file, &dir, changed, "", 0);
				"%s:%d: leftover conflict marker\n",
				data->filename, data->lineno);
		fprintf(data->o->file, "%s:%d: %s.\n",
			data->filename, data->lineno, err);
		emit_line(data->o->file, set, reset, line, 1);
static void emit_binary_diff_body(FILE *file, mmfile_t *one, mmfile_t *two)
		fprintf(file, "delta %lu\n", orig_size);
		fprintf(file, "literal %lu\n", two->size);
	fprintf(file, "\n");
static void emit_binary_diff(FILE *file, mmfile_t *one, mmfile_t *two)
	fprintf(file, "GIT binary patch\n");
	emit_binary_diff_body(file, one, two);
	emit_binary_diff_body(file, two, one);
	strbuf_addf(&header, "%sdiff --git %s %s%s\n", set, a_one, b_two, reset);
		strbuf_addf(&header, "%snew file mode %06o%s\n", set, two->mode, reset);
		strbuf_addf(&header, "%sdeleted file mode %06o%s\n", set, one->mode, reset);
			strbuf_addf(&header, "%sold mode %06o%s\n", set, one->mode, reset);
			strbuf_addf(&header, "%snew mode %06o%s\n", set, two->mode, reset);
		    !memcmp(mf1.ptr, mf2.ptr, mf1.size))
			emit_binary_diff(o->file, &mf1, &mf2);
			fprintf(o->file, "Binary files %s and %s differ\n",
				lbl[0], lbl[1]);
		if (!DIFF_XDL_TST(o, WHITESPACE_FLAGS)) {
		ecbdata.file = o->file;
			ecbdata.diff_words->file = o->file;
		strbuf_addf(msg, "%ssimilarity index %d%%",
			    set, similarity_index(p));
		strbuf_addf(msg, "%s\n%scopy from ", reset, set);
		strbuf_addf(msg, "%s\n%scopy to ", reset, set);
		strbuf_addf(msg, "%ssimilarity index %d%%",
			    set, similarity_index(p));
		strbuf_addf(msg, "%s\n%srename from ", reset, set);
		strbuf_addf(msg, "%s\n%srename to ", reset, set);
			strbuf_addf(msg, "%sdissimilarity index %d%%%s\n",
		;
		strbuf_addf(msg, "%sindex %.*s..%.*s", set,
			    abbrev, sha1_to_hex(one->sha1),
			    abbrev, sha1_to_hex(two->sha1));
			     one, two, xfrm_msg, o, complete_rewrite);
	if (!diff_mnemonic_prefix) {
static void show_mode_change(FILE *file, struct diff_filepair *p, int show_name)
		fprintf(file, " mode change %06o => %06o%c", p->one->mode, p->two->mode,
			show_name ? ' ' : '\n');
static void show_rename_copy(FILE *file, const char *renamecopy, struct diff_filepair *p)
	show_mode_change(file, p, 0);
static void diff_summary(FILE *file, struct diff_filepair *p)
		show_rename_copy(file, "copy", p);
		show_rename_copy(file, "rename", p);
			fputs(" rewrite ", file);
		show_mode_change(file, p, !p->score);
		for (i = 0; i < q->nr; i++)
			diff_summary(options->file, q->queue[i]);