#include<cs50.h>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(int argc, const char *argv[]){
srand(time(NULL));
for(int i=2;i<22;i++){
int random=1+rand()%i;
printf("This is my  %ith time at Columbia\n",random);
}

iPress Space to turn off
:nnoremap <silent> <Space> :nohlsearch<Bar>:echo<CR>
 
" ===================== Indentation & Tabs ==============================
set noexpandtab         " no spaces when tab is pressed
set tabstop=4       " tab counts for 8 columns
set shiftwidth=4    " used for >> << and auto-indentation
set textwidth=79    " screen in 80 columns wide,wrap at 79
set smartindent
set cindent
 
"Python
au Filetype python setl et ts=4 sw=4
 
"Remove trailing whitespace
autocmd FileType * autocmd BufWritePre <buffer> :%s/\s\+$//e
 
 
" ===================== Plugins ==========================
execute pathogen#infect()
" Use pathogen for clean installation & removeal of plugins
" Any plugins you wish to install can be extracted to a
" subdirectory under ~/.vim/bundle, and they will be added
" to the 'runtimepath'. Example:
" cd ~/.vim/bundle
" git clone git://github.com/tpope/vim-sensible.git
" Now sensible.vim is installed.
 
"==== NerdTree
" Open with F7
map <F7> :NERDTreeToggle<CR>
" The default leader is '\'
" \e to find
map <leader>e :NERDTreeFind<CR>
nmap <leader>nt :NERDTreeFind<CR>
" Close vim if only NerdTree is open
autocmd bufenter * if (winnr("$") == 1 && exists("b:NERDTreeType") && b:NERDTreeType == "primary") | q | endif
 
"==== TagBar
" Open with F8
nmap <F8> :TagbarToggle<CR>
 
"==== Tabular
" The default leader is '\'
" Select text in Visual Mode and then press
" \a= to tabularize =
" \a: to tabularize :
" etc
 
nmap <Leader>a& :Tabularize /&<CR>
                                                    
return 0;
}
