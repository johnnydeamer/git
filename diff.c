static int diff_no_prefix;
	if (!strcmp(var, "diff.noprefix")) {
		diff_no_prefix = git_config_bool(var, value);
		return 0;
	}
	xpp.flags = 0;
		if (xfrm_msg)
			strbuf_addstr(&header, xfrm_msg);
		if (xfrm_msg)
			strbuf_addstr(&header, xfrm_msg);
		if (xfrm_msg)
			strbuf_addstr(&header, xfrm_msg);
		xpp.flags = o->xdl_opts;
		xpp.flags = o->xdl_opts;
		xpp.flags = 0;
			  struct diff_filepair *p,
			  int use_color)
	const char *set = diff_get_color(use_color, DIFF_METAINFO);
	const char *reset = diff_get_color(use_color, DIFF_RESET);

		strbuf_addf(msg, "%ssimilarity index %d%%",
			    set, similarity_index(p));
		strbuf_addf(msg, "%s\n%scopy from ", reset, set);
		strbuf_addf(msg, "%s\n%scopy to ", reset, set);
		strbuf_addf(msg, "%s\n", reset);
		strbuf_addf(msg, "%ssimilarity index %d%%",
			    set, similarity_index(p));
		strbuf_addf(msg, "%s\n%srename from ", reset, set);
		strbuf_addf(msg, "%s\n%srename to ", reset, set);
		strbuf_addf(msg, "%s\n", reset);
			strbuf_addf(msg, "%sdissimilarity index %d%%%s\n",
				    set, similarity_index(p), reset);
		strbuf_addf(msg, "%sindex %s..", set,
			    find_unique_abbrev(one->sha1, abbrev));
		strbuf_addstr(msg, find_unique_abbrev(two->sha1, abbrev));
		strbuf_addf(msg, "%s\n", reset);
	if (msg) {
		/*
		 * don't use colors when the header is intended for an
		 * external diff driver
		 */
		fill_metainfo(msg, name, other, one, two, o, p,
			      DIFF_OPT_TST(o, COLOR_DIFF) && !pgm);
		xfrm_msg = msg->len ? msg->buf : NULL;
	}

	memset(&diff_queued_diff, 0, sizeof(diff_queued_diff));
	if (diff_no_prefix) {
		options->a_prefix = options->b_prefix = "";
	} else if (!diff_mnemonic_prefix) {
		xpp.flags = 0;
	DIFF_QUEUE_CLEAR(q);
	DIFF_QUEUE_CLEAR(q);
	DIFF_QUEUE_CLEAR(&outq);
	DIFF_QUEUE_CLEAR(&outq);
	/* We never run this function more than one time, because the
	 * rename/copy detection logic can only run once.
	 */
	if (diff_queued_diff.run)
		return;


	diff_queued_diff.run = 1;